#include <iostream>
using namespace std;
void printcrap(int a);
void printcrap2(int b);
void printcrap3();

int main()
{
	int j=0;
	for(int i=0;i<=3;i++)
	{
		printcrap(j);
		
		}
	
	for(int x=0;x<=3;x++)
	{
		printcrap2(j);
		
		}
	for(int k=0;k<=3;k++)
	{
		printcrap3();
		
		}

}

	
	
void printcrap(int a)
{
	cout<<a++<<endl;
	
	}
	
void printcrap2(const int b)
{
	cout<<b<<endl;
	
	}
void printcrap3()
{
	static int a=1;
	cout<<a++<<endl;	
	}
