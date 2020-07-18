#include <iostream>
using namespace std;
#include "sally.hpp"
int main()
{
	sally a(34);
	sally b(21);
	sally c;
	
	c=a+b;//now when ever we use this + operator the compiler knows that it has to use that function operator+ 
	cout<<c.num<<endl; 
	
	
	return 0;
}
