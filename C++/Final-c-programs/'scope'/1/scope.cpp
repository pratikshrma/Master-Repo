#include <iostream>

using namespace std;
 int tuna = 69;	//global variable
 int main()
{
	double tuna = 20;	//local variable
	
	cout<< ::tuna <<endl;	/*these double collan are used to call global variable
							and are generelly used if a general variable value is stored in two types ie 
							int and double			URINARY SCOPE RESOLUTION OPERATOR*/
	
	return 0;
}
