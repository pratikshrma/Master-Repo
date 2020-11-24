/*
Topic : std:vector

Note:
1>std:vector is a sequence container and also known as Dynamic array or Array list.
2>Its size can grow and shrink dynamically and no need to provide size at compile time.

Element Access;
at(),front(),back(),data()

Modifiers:
insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()



*/

#include <iostream>
using namespace std;
int main(){
	//Declaration
	std::vector<int> arr1;
	std::vector<int> arr2 (5,10);//so what this means is that creat a vector of size 5 and put 10 in all of them
	std::vector<int> arr3 ={1,2,3,4,5,6,7,8};
	std::vector<int> arr4 {1,2,3,4,5,6,7};

	//Accessing Elements
	arr2[3]=10;
	arr2.at(3)=10;
	


	return 0;
}