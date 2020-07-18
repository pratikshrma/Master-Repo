#include <iostream>
using namespace std;

int factorialfinder(int x)//without a base case this recurcive function will never end
{
	if(x==1)
	{
		return 1;
	
	}
	else 
	{
		
		return x*factorialfinder(x-1);
		}
	
	
}
	
int main()
{
	cout<<factorialfinder(5)<<endl;
	
	return 0;
}
