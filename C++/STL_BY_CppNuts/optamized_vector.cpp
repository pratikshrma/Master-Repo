/*best way to use vector in c++

	now what is the problem with the original vector
	so at its heart a vector is just Linked list + Array  
	now best feature of linked list is it can grow dynamically and the best feature of array is o(1) time

	so the problem is that it copies very time you get to the previous limit of the vector and you know copying is 
	the worst in programmig its just useless so you just have to add a simple reserve before filling it with stuff
*/


#include <iostream>
#include <vector>
int main(){

	std::vector<int> vec;
	vec.reserve(1000);
	for(int i=0;i<4099;i++){
		std::cout<<"Size "<<vec.size()<<"  capacity "<<vec.capacity()<<std::endl; 
		vec.push_back(i);
	}

	return 0;
}