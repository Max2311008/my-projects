const emailInput = document.getElementById('email'); //ищет переменные по id
const checkBtn = document.getElementById('checkBtn');//ищет переменные по id
const resultBlock = document.getElementById('result');//ищет переменные по id
function checkEmail() { // вызывает функцию
    const email = emailInput.value.trim();
    if (email.includes("@")){ //условие на содержание в строке @
        emailInput.style.borderColor = 'green';
        emailInput.style.borderWidth = '2px';
        resultBlock.style.borderColor = 'green';
    }
    else {
        emailInput.style.borderColor = 'red';
        emailInput.style.borderWidth = '2px';
        resultBlock.style.borderColor = 'red'; 
    }
}
checkBtn.addEventListener('click', checkEmail); //по команде click выполняется функция checkEmail

