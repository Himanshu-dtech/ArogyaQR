from flask import Flask, request, render_template_string
import os
import qrcode
from fpdf import FPDF
from PIL import Image
from uuid import uuid4
from werkzeug.utils import secure_filename

# Google Drive API
from google.oauth2 import service_account
from googleapiclient.discovery import build
from googleapiclient.http import MediaFileUpload

app = Flask(__name__)

# Configuration
UPLOAD_FOLDER = 'uploads'
PDF_PATH = 'output.pdf'
QR_PATH = 'static/qr.png'
CREDENTIALS_FILE = 'credentials.json'

# Ensure folders exist
os.makedirs(UPLOAD_FOLDER, exist_ok=True)
os.makedirs('static', exist_ok=True)

# Google Drive Authentication
SCOPES = ['https://www.googleapis.com/auth/drive.file']
creds = service_account.Credentials.from_service_account_file(CREDENTIALS_FILE, scopes=SCOPES)
drive_service = build('drive', 'v3', credentials=creds)

# Upload file to Google Drive
def upload_to_drive(filepath, filename):
    file_metadata = {'name': filename}
    media = MediaFileUpload(filepath, resumable=True)
    file = drive_service.files().create(body=file_metadata, media_body=media, fields='id').execute()

    # Make file public
    drive_service.permissions().create(
        fileId=file['id'],
        body={'type': 'anyone', 'role': 'reader'}
    ).execute()

    return f"https://drive.google.com/file/d/{file['id']}/view"


def create_pdf(image_paths, output_pdf):
    pdf = FPDF()
    temp_files = []

    for img_path in image_paths:
        with Image.open(img_path) as img:
            
            rgb_img = img.convert("RGB")
            temp_path = os.path.join(UPLOAD_FOLDER, f"{uuid4().hex}.png")
            rgb_img.save(temp_path, "PNG")
            temp_files.append(temp_path)

            # Add to PDF
            pdf.add_page()
            pdf.image(temp_path, x=10, y=10, w=190)

    pdf.output(output_pdf)

    
    for temp_file in temp_files:
        if os.path.exists(temp_file):
            os.remove(temp_file)

@app.route('/')
def index():
    with open('index.html') as f:
        return render_template_string(f.read())

@app.route('/upload', methods=['POST'])
def upload():
    total = int(request.form['total'])
    image_paths = []

    for i in range(total):
        file = request.files.get(f'image{i}')
        if file:
            filename = secure_filename(file.filename)
            path = os.path.join(UPLOAD_FOLDER, filename)
            file.save(path)
            image_paths.append(path)

    create_pdf(image_paths, PDF_PATH)
    drive_link = upload_to_drive(PDF_PATH, "uploaded_images.pdf")

    img = qrcode.make(drive_link)
    img.save(QR_PATH)

    with open('result.html') as f:
        return render_template_string(f.read(), link=drive_link, qr_path=QR_PATH)

if __name__ == '__main__':
    app.run(debug=True)
