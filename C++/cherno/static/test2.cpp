#include <iostream>
//external linking
extern int s_variable;//it means that it gonna look for s_variable in an extrnal unit

void function()
{
	
	}

int main()
{
	std::cout<<s_variable<<std::endl;
	std::cin.get();
	return 0;
	
}

