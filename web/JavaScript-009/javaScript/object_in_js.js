//Object in javascript
//dictioneriies in python

let student={
	first:'Aman',
	last:'Sharma',
	age:'17',
	height:'182',

	studentInfo: function(){
		return this.first + '\n' + this.last;
	}

	};
console.log(student.first);
//student.first='not_amam'; //Change VAlue
console.log(student.first);

student.age++;
console.log(student.age)
console.log(student.studentInfo());
