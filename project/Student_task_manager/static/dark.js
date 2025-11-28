let btn = document.getElementById("modeToggle");
let body = document.body;

// Check saved mode
let savedMode = localStorage.getItem("mode");

if (savedMode === "dark") {
    enableDark();
}

// Toggle on click
btn.addEventListener("click", () => {
    if (body.classList.contains("dark-mode")) {
        disableDark();
    } else {
        enableDark();
    }
});

// Enable dark mode
function enableDark() {
    body.classList.add("dark-mode");
    btn.textContent = "☀️";
    localStorage.setItem("mode", "dark");
}

// Disable dark mode
function disableDark() {
    body.classList.remove("dark-mode");
    btn.textContent = "🌙";
    localStorage.setItem("mode", "light");
}
