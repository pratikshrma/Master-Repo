//http://www.cs.ecu.edu/karl/3300/spr16/Notes/C/Array/heap.html this is this exercise


#include <iostream>
using namespace std;
int main(){

	int *A = new int[25];  //to bro ye hei heap mei array
	//now a mei 0th index ka pointer ki value store hui hei
	
	//now beginner mistake
	int *a =new int(25);
	// tera a allocate karaga memory mei or usme 25 value dal dega

	//now once you allocate some memory you also need to errase it manually
	delete []A; //thats how you del a heap allocated space


	

	
	return 0;
}