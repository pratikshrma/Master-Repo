const defaultResult = 0;
let currentResult = defaultResult;

function add(num1, num2) {
  const calcDescription = `${currentResult} + ${userInput.value}`;

  currentResult = currentResult + parseInt(userInput.value);
  // instead of doing parseint every time you could also just add another +
  // operator in the end and that willl also do the same thing 
  // like currentResult=curretResult + +userInput.value;
  // thats it
  outputResult(currentResult,calcDescription );
  
}

addBtn.addEventListener("click", add);
// so if you add () after the add it will call the add function imidieatly after finising
// the sentencs but if you do not add the parenthesis in the end it will tell the browser engin that wait
// when the condition is met then only exicute the function in our case it is click event

// you can add function where ever you want but not the
// initialization variable
