
#include <iostream>
using namespace std;
int main()
{
	int a = 5;
	int b = 9;

	int& ref=a;
	
	//int& ref2;//and we cannot do this
	//ref=b;
	//a=b this will happen in this case
	
/*	int* point=&a;
	point = 32;
	int* point=&b;
	point = 521;*/
	
	//then this will work
	
	return 0;
	}
