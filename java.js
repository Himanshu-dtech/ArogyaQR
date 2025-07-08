  const toggleBtn = document.getElementById('theme-toggle');
  const html = document.documentElement;
  let logoimg=document.querySelector(".logo img");

  // Load saved theme
  const saved = localStorage.getItem('theme');
  if (saved) {
    html.setAttribute('data-theme', saved);
  }

  toggleBtn.addEventListener('click', () => {
    const current = html.getAttribute('data-theme') || 'light';
    const newTheme = current === 'light' ? 'dark' : 'light';
    html.setAttribute('data-theme', newTheme);
    localStorage.setItem('theme', newTheme);
   
  });

let loginbtns=document.querySelectorAll(".loginlink");
loginbtns.forEach(btn => {
  btn.addEventListener("click", () => {
    window.location.href = "login.html";
  });
});
