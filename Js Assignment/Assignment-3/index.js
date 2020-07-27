var r = 0;
while (r < 0.7) {
	r = r + Math.random();
}
console.log(r);

let array = [1, 2, 3, 4, 5, 6, 7, 8, 9];

for (var i = array.length; i > 0; i--) {
	console.log(array[i]);
}
let q = 0;
while (q < array.length) {
	console.log(array[q]);
	q++;
}

// var is always global
// let can only be used inside the scope
