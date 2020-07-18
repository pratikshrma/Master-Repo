#include <iostream>
using namespace std;
int main()
{
	
	try{
		int num1;
		cout<<"enter first number:"<<endl;
		cin>>num1;
		
		int num2;
		cout<<"enter second number:"<<endl;
		cin>>num2;
		
		if(num2==0)
		{
			throw 0;
			}
		cout<<num1/num2<<endl;
		
		}
	catch(...)//there are difftypes of catch statement you can even catch (int x)stris,float whatever
				//{...}catches everything
		
		{
		cout<<"you cant divide by zero error no :"<<endl;
		
		}
	
	
	return 0;
	}

