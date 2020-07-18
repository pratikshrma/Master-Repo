#include <iostream>
using namespace std;
int main()
{
	int aman[5];
	aman[0]=1;
	int *am0 = &aman[0];
	int *am1 = &aman[1];
	int *am2 = &aman[2];
	cout<<"am0 is at"<<am0<<endl;
	cout<<"am1 is at"<<am1<<endl;
	cout<<"am2 is at"<<am2<<endl;
	
	am0 +=2;
	cout<<"am0 is at"<<am0<<endl; /*whwn ever working with pointers math it does not change the memory addresse it 
	changing which element it is pointing to SIMPLE ENOUGH XD*/
	cout<<"am2 is at"<<am2<<endl;
	cout<<"am0 is at"<<am0<<endl;
	cout<<aman[0]<<endl;
	
	
	
	return 0;
	
	
}
