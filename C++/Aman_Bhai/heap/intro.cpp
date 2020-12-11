// lecture 12 Apna college isko dekh lei bad mei bhi kafi imp vid hie or isme grapics bhi ache use kia hue hei.

#include <iostream>
using namespace std;
int main(){
	// dekh heap ka to terko pata hi hei ki ye heap se kam hoti hei or isme dinamically memory allocate nahi kar sakte 
	// par iske faide ye thoda sa fast hota hie heap allocation se 

	// par jse agar terko 100 ka texture pack use karna hei to stack ko use nahi kar sakye kyuki stack chota hota hie matlab windows ka 
	// default 1MB hei or linux ka default 8MB hei to dekh le ab

	// par heap use karne ki sirdardi bhi hei jse ki memory ko manually release bhi karni padti hei 

	// or heap ko ham expand kar sakte hei as big as the virtual memory of our system

	// /han ek or chez ham heap allocated elements ko kahi se bhi access kar sakte hie vo global hota hei unlike stack elements

	// an hamne allocate kia hei to deallocate bhi karna pdaga

	int a=10;  //stored in stack
	
	int *p=new int(); //now new variable is used to allocate memory in the heap
	*p=10;  //	AB YAHA DHIYAN SE SUNI   yaha pe ye directly heap me ni store ho raha hoga p hei stack mei hi par p point kar kaha hoga us
	// memory address ki taraf jo heap mei hei jisme p ki value bhi stored hei 
	
	delete(p); // it is used to dealocate the memory in heap par ab jo vo pointer hei p vo stack mei hi rahaga or isko bolte 
	// hei dangling pointers


	p=new int[4];  //now ab yaha pe hamko p ko dubara declear kane ki zarurat nahi hei kyuki ye ab ek dangling pointer ban gaya the 
	// last step ke bad
	//isse ek 4 size ka array ban jai ga heap mei ab ye array ko kse point karaga? ye array ke [0] element ko point karaga 


// now ab mean kahi suna tha ki isko compile time mei btana utna zaruri nahi hota hei ye dynamically memory allocate karte hei 
// memory ab check karne pdage us claim ko ek bar



	delete[] p;  //now ab agar hamko us array ko delete karna hei to ham isko use karage delete ke aage [] to delete an array 
	
	p=NULL;



	return 0;
}