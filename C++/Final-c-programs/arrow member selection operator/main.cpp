#include <iostream>
using namespace std;
#include "sally.hpp"
int main()
{
	
	sally sallyobject;
	sally *sallypointer = &sallyobject;//class ke pointes ko class ka hi name jse kuch dena pdat hei!!
	
	
	sallyobject.printcrap();
	
	sallypointer->printcrap();
	
	return 0;
}
//g++ main.o sally.o -o sally
