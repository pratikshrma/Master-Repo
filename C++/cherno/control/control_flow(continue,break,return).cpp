#include <iostream>
using namespace std;
int main()
{
	for(int i=0;i<5;i++)
	{
		
		if(i%2==0)
		continue;//if condition is true it wil jump to the next iteration
		std::cout<<"hello world"<<std::endl;
		std::cout<<i<<std::endl;

		
		}
		for(int i=0;i<5;i++)
	{
		
		if(i>2)
		break;//if condition is true it wil break the loop 
		std::cout<<"hello world"<<std::endl;
		std::cout<<i<<std::endl;

		
		}
	for(int i=0;i<5;i++)
	{
		
		if(i%2==1)
		return 0;//if condition is true it wil return and will the whole class and return can be anywhere in the program
		std::cout<<"return"<<std::endl;
		std::cout<<i<<std::endl;

		
	}	
	return 0;
}
