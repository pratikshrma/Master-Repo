console.log('Hello world Yo');

let iamglobal='someValue';
if(true)
{
	iamglobal='i_am_superman';
	let iamlocal='i_am_local';
	console.log(iamlocal);
	console.log(iamglobal);
	
}

console.log(iamglobal);