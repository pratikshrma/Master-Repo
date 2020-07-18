#include "sally.hpp"
#include <iostream>
using namespace std;
int main()
{
	sally salobj;
	salobj.printshiz();
	
	const sally obj; /*to use const objects you need a constant function*/
	obj.printshiz2();
	
	
	return 0;
}
