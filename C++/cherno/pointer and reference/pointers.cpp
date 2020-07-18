#include <iostream>
#include <string>
using namespace std;//a pointer is just a memory address
int main()
{
	int var=8;
	int var2=60;
	double* ptr=(double*)&var;//thats how you force it to behave like a double or any other type
	void* ptr1=&var2;
	*ptr1=10;	//getting an error because cant overwwrite a void type bc pc dosent know wat it is it could be an iunt or a string or a long who knows
				//we need to manually change it to cometing complier aint got a brain
	cout<<ptr1<<endl;
	
	
	
	char* buffer=new char[];//now this will allocate 8 byte of memory as wwe know that char is fundamentally 1 byte 
	memset(buffer,0,8);
	return 0;

}
