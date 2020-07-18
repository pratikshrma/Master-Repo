#include <iostream>
//external linking
extern int s_variable;//it means that it gonna look for s_variable in an extrnal unit
//inn this case to run this link it with test2_extension.cpp//cool!!

int main()
{
	std::cout<<s_variable<<std::endl;
	std::cin.get();
	return 0;
	
}

