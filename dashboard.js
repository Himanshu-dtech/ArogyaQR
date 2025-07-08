// === Firebase & API Logic for Dashboard ===

import { initializeApp } from 'https://www.gstatic.com/firebasejs/11.10.0/firebase-app.js';
import {
  getAuth,
  onAuthStateChanged,
  signOut
} from 'https://www.gstatic.com/firebasejs/11.10.0/firebase-auth.js';
import {
  getFirestore,
  doc,
  getDoc
} from 'https://www.gstatic.com/firebasejs/11.10.0/firebase-firestore.js';

const firebaseConfig = {
  apiKey: "AIzaSyBPFGQScZ3GaU3WwI5kx7raSN0B41JvwDw",
  authDomain: "login-2d248.firebaseapp.com",
  projectId: "login-2d248",
  storageBucket: "login-2d248.appspot.com",
  messagingSenderId: "527022428262",
  appId: "1:527022428262:web:26491709d3e2d42b139da7"
};

const app = initializeApp(firebaseConfig);
const auth = getAuth(app);
const db = getFirestore(app);

// 🔐 Fetch user details after login
onAuthStateChanged(auth, async (user) => {
  if (user) {
    const docRef = doc(db, "users", user.uid);
    const docSnap = await getDoc(docRef);
    if (docSnap.exists()) {
      const data = docSnap.data();
      document.getElementById("nameField").textContent = data.name;
      document.getElementById("ageField").textContent = data.age;
      document.getElementById("bloodField").textContent = data.bloodGroup;
    } else {
      alert("No user data found.");
    }
  } else {
    window.location.href = "index.html"; // Redirect if not logged in
  }
});

// 📸 Profile preview
const uploadInput = document.getElementById("uploadBtn");
if (uploadInput) {
  uploadInput.addEventListener("change", (e) => {
    const file = e.target.files[0];
    if (file) {
      const reader = new FileReader();
      reader.onload = () => {
        document.getElementById("profilePic").src = reader.result;
      };
      reader.readAsDataURL(file);
    }
  });
}

// 💡 Health Tip (Static from array)
const healthTips = [
  "🍊 Oranges boost your immune system!",
  "🥦 Broccoli is packed with vitamins K and C.",
  "🥬 Spinach improves eye and bone health.",
  "🍇 Grapes protect heart health.",
  "🍓 Berries are rich in antioxidants."
];
document.getElementById("healthTip").textContent =
  healthTips[Math.floor(Math.random() * healthTips.length)];

// 🔓 Logout
const logoutBtn = document.getElementById("logoutBtn");
if (logoutBtn) {
  logoutBtn.addEventListener("click", (e) => {
    e.preventDefault();
    signOut(auth).then(() => {
      window.location.href = "login.html";
    });
  });
}

// 🌐 BMI Calculator
window.calculateBMI = () => {
  const weight = parseFloat(document.getElementById("weight").value);
  const height = parseFloat(document.getElementById("height").value);
  const unit = document.getElementById("unit").value;
  let bmi;

  if (unit === "metric") {
    bmi = weight / ((height / 100) ** 2);
  } else {
    bmi = (weight / (height ** 2)) * 703;
  }

  const result = document.getElementById("bmiResult");
  result.textContent = `Your BMI is ${bmi.toFixed(1)} (${classifyBMI(bmi)})`;
};

function classifyBMI(bmi) {
  if (bmi < 18.5) return "Underweight";
  if (bmi < 25) return "Normal";
  if (bmi < 30) return "Overweight";
  return "Obese";
}



// 🌗 Dark Mode Toggle
const toggleBtn = document.getElementById("toggleMode");
if (toggleBtn) {
  toggleBtn.addEventListener("click", () => {
    document.body.classList.toggle("dark");
    localStorage.setItem("theme", document.body.classList.contains("dark") ? "dark" : "light");
  });
  if (localStorage.getItem("theme") === "dark") {
    document.body.classList.add("dark");
  }
}

// 🚀 Scroll to section buttons
const navButtons = document.querySelectorAll(".nav-btn");
navButtons.forEach(btn => {
  btn.addEventListener("click", () => {
    const text = btn.textContent.trim();
    if (text.includes("Profile")) document.getElementById("profile").scrollIntoView({ behavior: "smooth" });
    else if (text.includes("Stats")) document.getElementById("stats").scrollIntoView({ behavior: "smooth" });
    else if (text.includes("QR")) document.getElementById("qr").scrollIntoView({ behavior: "smooth" });
    else if (text.includes("BMI")) document.getElementById("bmi").scrollIntoView({ behavior: "smooth" });
    else if (text.includes("Tips")) document.getElementById("tips").scrollIntoView({ behavior: "smooth" });
  });
});
