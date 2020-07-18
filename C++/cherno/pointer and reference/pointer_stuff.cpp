#include <iostream>
#include <string>
using namespace std;//a pointer is just a memory address
int main()
{

   char* buffer=new char[8];//now this will allocate 8 byte of memory as wwe know that char is fundamentally 1 byte 
	
	memset(buffer, 0, 8);//gotta se what is wrong with this??
	
	char** ptr=&buffer;
	
	delete[] buffer;//to delete the buffer
	return 0;
	}
