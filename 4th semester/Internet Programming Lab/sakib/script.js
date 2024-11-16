const form = document.getElementById('login-form');

form.addEventListener('submit', function (e) {
    e.preventDefault();
    
    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;
    
    // Here you can add your login logic, e.g., check against a database
    
    if (username === 'yourUsername' && password === 'yourPassword') {
        alert('Login successful!');
    } else {
        alert('Login failed. Please check your username and password.');
    }
});