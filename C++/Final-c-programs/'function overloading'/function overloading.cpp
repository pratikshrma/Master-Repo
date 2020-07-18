#include <iostream>
using namespace std;

void printnumber(int x)
{
	cout<<"i am printing an integer  "<<x<<endl;
	}

void printnumber(double x)
{
	cout<<"now i a- floar  "<<x<<endl;
	}

int main()
{
	int a=53;
	float b=32.54683;
	
	printnumber(b);//it is useful for user as they can enter number in int or float and the program or 
	printnumber(a);					//class will decide which function to use for this task*/
	return 0;
}

/*its all about the user convinience even if it takes a little 
bit of coading and and saves a tiny amount of data*/ 
