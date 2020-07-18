console.log('Hello World');

let myMylti=function(num1,num2)
{
	return(num1*num2);

}

let guestUser=function(name='Annonymus',courseCount='0')
{
	return 'HEllo '+ name+' your course count is '+courseCount;

}
console.log(guestUser());

console.log(guestUser('John'));


let var1=10;
let var2=10;
console.log(myMylti(var1,var2));