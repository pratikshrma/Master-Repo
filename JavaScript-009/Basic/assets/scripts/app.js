const defaultResult = 0;
let currentResult = defaultResult;

function add(num1, num2) {
  currentResult = currentResult + userInput.value;
  outputResult(currentResult,'');
}

addBtn.addEventListener("click", add);
// so if you add () after the add it will call the add function imidieatly after finising
// the sentencs but if you do not add the parenthesis in the end it will tell the browser engin that wait
// when the condition is met then only exicute the function in our case it is click event

// you can add function where ever you want but not the
// initialization variable
