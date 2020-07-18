#include <iostream>
using namespace std;
#include "sally.hpp"


sally::sally()
{
	
}

sally::sally(int a)
{
	num=a;
}
sally sally::operator+(sally aso)
{
	sally brandnew;
	brandnew.num=num+aso.num;
	return(brandnew);
	
	}

