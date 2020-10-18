//Challenge 1: your Age in Days
//DOM programing 
//Document Oriented Programing/Model
function ageindays(){
var birthyear=prompt('What year were you Born');
var _ageindays=(2020-birthyear)* 365;
var h1=document.createElement('h1');
var textanswer=document.createTextNode('You are '+_ageindays+' years old');
h1.setAttribute('id','ageindays');
h1.appendChild(textanswer);
document.getElementById('flex-box-result').appendChild(h1);


}
function reset()
{
	document.getElementById('ageindays').remove();
}