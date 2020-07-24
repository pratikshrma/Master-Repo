const defaultResult = 0;
let currentResult = defaultResult;

function add(num1, num2) {
    const result = num1 + num2;
    alert('The Result is '+result);
}

add(10,20);

currentResult = currentResult + 10;

let calculationDescription = `${currentResult} + 10`;

outputResult(add(23,45), calculationDescription);

console.log("Hello World y");
