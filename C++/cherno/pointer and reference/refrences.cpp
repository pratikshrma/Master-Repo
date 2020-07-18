#include <iostream>
using namespace std;
string printcrap(int c);
void incriment(int& value);//this is with the use of reference 
/*void incriment(int* value)
{
	
	*value++;//if we leave it this way then it will incriment the memory address but we wantwed to incriment the value instead
			/*this will not work but sill goona leave his for future refernece 
			 * so bro if we leave it that way then it goona incriment the memomery address
			 * befor the incriment in value even happens so it gonna incriment the changed memory address
			 * and not the value of a 
			 * so to run the programn jusr remove the *value++ from there */
	//(*value)++;//so derefrence the pointer first then incriment the value
	//}

int main()
{
	int a=5;
	int* b=&a;//there is an extra variable ie b
	int& ref=a;//now by this we have created an alliace#spelling//now theoreically ref==a;and chand in ref will affect a but not the vice versa
				//in this no exter variable is created
	
	ref =2;//so ref was a memory address of a so by changing ref we effectively change something which has address ref in this case ie a
	cout<<a<<endl;
	
	
	//incriment(&a); //this is for pointer
	incriment(a);//this is by reference
	printcrap(a);
	
	
	return 0;
	}
string printcrap(int c)
{
	cout<<c<<endl;
	}


//so now with the use of reference instead of pointers

void incriment(int& value)
{
	//it is  a lot cleaner to read with the refrence
	value++;
}
