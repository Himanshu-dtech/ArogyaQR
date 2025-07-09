const express = require('express');
const multer = require('multer');
const cloudinary = require('cloudinary').v2;
const fs = require('fs');
const path = require('path');
const QRCode = require('qrcode');
const fetch = (...args) => import('node-fetch').then(({default: fetch}) => fetch(...args));
require('dotenv').config();

const app = express();
const PORT = 3000;

app.use(express.urlencoded({ extended: true }));
app.use(express.json());
app.use(express.static(__dirname));

const upload = multer({ dest: './' });

cloudinary.config({
  cloud_name: process.env.CLOUD_NAME,
  api_key: process.env.API_KEY,
  api_secret: process.env.API_SECRET,
});

app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, 'index.html'));
});

app.get('/history', (req, res) => {
  res.sendFile(path.join(__dirname, 'history.html'));
});

app.get('/history.json', (req, res) => {
  const historyPath = path.join(__dirname, 'history.json');
  if (fs.existsSync(historyPath)) {
    const history = fs.readFileSync(historyPath);
    res.json(JSON.parse(history));
  } else {
    res.json([]);
  }
});

app.post('/upload', upload.array('documents'), async (req, res) => {
  const { description, name, age } = req.body;
  const files = req.files;

  if (!files || files.length === 0) {
    return res.status(400).json({ success: false, error: 'No files uploaded' });
  }

  try {
    const now = new Date();
    const timestamp = now.toISOString().replace(/[-:.TZ]/g, '').slice(0, 14);
    const folderName = `imageset_${timestamp}`;
    const qrFileName = `qr_RB_${timestamp}.png`;

    const imageUrls = [];

    for (const file of files) {
      const uploadResult = await cloudinary.uploader.upload(file.path, {
        folder: folderName,
        resource_type: 'image',
      });

      imageUrls.push(uploadResult.secure_url);
      fs.unlinkSync(file.path); 
    }

    
    const htmlContent = `
      <html>
        <head><title>Uploaded Images</title></head>
        <body>
          ${imageUrls.map(url => `<img src="${url}" style="max-width:100%;margin:10px 0">`).join('<br>')}
        </body>
      </html>
    `;

    const htmlFileName = `images_${timestamp}.html`;
    fs.writeFileSync(path.join(__dirname, htmlFileName), htmlContent);

    const htmlUrl = `http://localhost:${PORT}/${htmlFileName}`;

    await QRCode.toFile(qrFileName, htmlUrl);

    const historyPath = path.join(__dirname, 'history.json');
    const history = fs.existsSync(historyPath)
      ? JSON.parse(fs.readFileSync(historyPath))
      : [];

    history.push({ name, age, description, htmlUrl, qrPath: qrFileName });
    fs.writeFileSync(historyPath, JSON.stringify(history, null, 2));

    res.json({ success: true, htmlUrl, qrPath: qrFileName });
  } catch (err) {
    console.error('❌ Error:', err);
    res.status(500).json({ success: false, error: err.message || 'Something went wrong' });
  }
});

app.post('/delete', (req, res) => {
  const { qrPath } = req.body;
  const historyPath = path.join(__dirname, 'history.json');
  if (!fs.existsSync(historyPath)) {
    return res.json({ success: false, error: 'No history found' });
  }

  let history = JSON.parse(fs.readFileSync(historyPath));
  history = history.filter(entry => entry.qrPath !== qrPath);

  if (fs.existsSync(path.join(__dirname, qrPath))) {
    fs.unlinkSync(path.join(__dirname, qrPath));
  }

  fs.writeFileSync(historyPath, JSON.stringify(history, null, 2));
  res.json({ success: true });
});

app.listen(PORT, () => {
  console.log(`🚀 Server running at http://localhost:${PORT}`);
});