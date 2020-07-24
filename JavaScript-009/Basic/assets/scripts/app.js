const defaultResult = 0;
let currentResult = defaultResult;


const alfa = add(34, 78);
console.log(alfa);
add(10, 20);

currentResult = currentResult + 10;

let calculationDescription = `${currentResult} + 10`;

outputResult(add(23, 45), calculationDescription);

console.log("Hello World y");

function add(num1, num2) {
    const result = num1 + num2;
    return result;
}
// you can add function where ever you want but not the 
// initialization variable