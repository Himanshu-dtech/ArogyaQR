import { initializeApp } from 'https://www.gstatic.com/firebasejs/11.10.0/firebase-app.js';
import { getAdditionalUserInfo } from "https://www.gstatic.com/firebasejs/11.10.0/firebase-auth.js";

import {
  getAuth,
  createUserWithEmailAndPassword,
  signInWithEmailAndPassword,
  GoogleAuthProvider,
  signInWithPopup,
  sendPasswordResetEmail
} from 'https://www.gstatic.com/firebasejs/11.10.0/firebase-auth.js';
import {
  getFirestore,
  doc,
  setDoc,
  getDoc
} from 'https://www.gstatic.com/firebasejs/11.10.0/firebase-firestore.js';

// ✅ Your Firebase config
const firebaseConfig = {
  apiKey: "AIzaSyBPFGQScZ3GaU3WwI5kx7raSN0B41JvwDw",
  authDomain: "login-2d248.firebaseapp.com",
  projectId: "login-2d248",
  storageBucket: "login-2d248.firebasestorage.app",
  messagingSenderId: "527022428262",
  appId: "1:527022428262:web:26491709d3e2d42b139da7"
};

// ✅ Initialize Firebase
const app = initializeApp(firebaseConfig);
const auth = getAuth(app);
const db = getFirestore(app);
const provider = new GoogleAuthProvider();

// 🔄 Panel switching logic
const container = document.getElementById('container');
document.getElementById('signUp').onclick = () => container.classList.add('right-panel-active');
document.getElementById('signIn').onclick = () => container.classList.remove('right-panel-active');

// 🔐 Google Signup
let tempGoogleUser = null;

document.getElementById('googleSignup').addEventListener('click', async () => {
  try {
    const result = await signInWithPopup(auth, provider);
    const user = result.user;
    const isNewUser = getAdditionalUserInfo(result).isNewUser;

    if (isNewUser) {
      tempGoogleUser = user;
      document.getElementById("container").style.display = "none";
      document.getElementById("googleDetailsForm").style.display = "flex";
    } else {
      alert("Welcome back!");
      window.location.href = "dashboard.html";
    }
  } catch (error) {
    alert("Google signup failed: " + error.message);
  }
});



// 📩 Email Signup
document.getElementById('signupBtn').addEventListener('click', async () => {
  const name = document.getElementById('firstName').value;
  const phone = document.getElementById('phone').value;
  const age = document.getElementById('age').value;
  const bloodGroup = document.getElementById('bloodGroup').value;
  const email = document.getElementById('email').value;
  const password = document.getElementById('password').value;

  try {
    const userCredential = await createUserWithEmailAndPassword(auth, email, password);
    const user = userCredential.user;

    await setDoc(doc(db, "users", user.uid), {
      uid: user.uid,
      email,
      name,
      phone,
      age,
      bloodGroup,
      method: "Email"
    });

    alert("Signup successful!");
    window.location.href = "dashboard.html";
  } catch (error) {
    alert("Signup failed: " + error.message);
  }
});

// 🔑 Email Login
document.getElementById('loginBtn').addEventListener('click', async () => {
  const email = document.getElementById('loginEmail').value;
  const password = document.getElementById('loginPassword').value;

  try {
    await signInWithEmailAndPassword(auth, email, password);
    alert("Login successful!");
    window.location.href = "dashboard.html";
  } catch (error) {
    alert("Login failed: " + error.message);
  }
});
// 🔐 Google Login with Firestore check
document.getElementById('googleLogin').addEventListener('click', async () => {
  try {
    const result = await signInWithPopup(auth, provider);
    const user = result.user;

    const userDocRef = doc(db, "users", user.uid);
    const userDocSnap = await getDoc(userDocRef);

    if (userDocSnap.exists()) {
      alert("Welcome back!");
      window.location.href = "dashboard.html";
    } else {
      alert("Please complete signup.");
      // You can redirect to Google details form or show it again
      document.getElementById("container").style.display = "none";
      document.getElementById("googleDetailsForm").style.display = "flex";
      tempGoogleUser = user;
    }

  } catch (error) {
    alert("Google login failed: " + error.message);
  }
});

//Submit Form
document.getElementById("googleExtraForm").addEventListener("submit", async (e) => {
  e.preventDefault();
  const name = document.getElementById("googleName").value;
  const phone = document.getElementById("googlePhone").value;
  const age = document.getElementById("googleAge").value;
  const bloodGroup = document.getElementById("googleBloodGroup").value;

  try {
    await setDoc(doc(db, "users", tempGoogleUser.uid), {
      uid: tempGoogleUser.uid,
      email: tempGoogleUser.email,
      name,
      phone,
      age,
      bloodGroup,
      method: "Google"
    });

    alert("Signup successful! Welcome " + name);
    window.location.href = "dashboard.html"; // You can change this to redirect instead
  } catch (error) {
    alert("Error saving details: " + error.message);
  }
});


// 🧠 Forgot Password
document.getElementById('forgotPasswordBtn').addEventListener('click', async () => {
  const email = document.getElementById('loginEmail').value;

  if (!email) {
    alert("Please enter your email first.");
    return;
  }

  try {
    await sendPasswordResetEmail(auth, email);
    alert("Password reset email sent to " + email);
  } catch (error) {
    alert("Error: " + error.message);
  }
});

// 👁️ Show/Hide Password Toggle
window.togglePassword = function (fieldId) {
  const field = document.getElementById(fieldId);
  field.type = field.type === "password" ? "text" : "password";
};
