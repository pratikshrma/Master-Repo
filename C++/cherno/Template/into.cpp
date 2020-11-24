// so what is a template
/*temp-Template
	temp are like a macro 
	so it is compiler writing code for you depending upon a given instruction if that makes any sence
*/

//so a good reason to make a template if i wanna make a function that is largely the same but may take diff
// types


#include <iostream>
#include <string>

template <typename T>  //ham typename ki jgha class bhi likh sakte hie
void print(T value){
	std::cout<<value<<std::endl;
}

// void print(int value){
// 	std::cout<<value<<std::endl;
// }

// void print(double value){
// 	std::cout<<value<<std::endl;
// }


int main(){
	print<int>(5);
	print<std::string>("Hello boi whats up");

	// so suppose hamne is print function ko kabhi call hi ni kia to ye  print class kabhi creat bhi ni hogi
	// kyuki ab ye ek template ban gai hei or template tabhi creat hota hei jab unko call kia jata hie
	// so template dosen't really exist until we call them
	

	return 0;
}