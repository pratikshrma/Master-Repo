#include <iostream>
class aman()
{
	public:
	printn(int a);
	printc(int b);
	prints(int d);
	
	};
int main()
{
	int n = 10;
	const int c=10;
	static int s =10;
	aman yo;
	yo.printn(n)
	//yo.printc(c);
	//yo.prints(s);
	
	}

void aman::printn(int x)
{
	for (int i=0;i<=3;i++)
	{
	std::cout<<x++<<std::endl;
	}
}
void aman::printc(int y)
{
	for (int i=0;i<=3;i++)
	{
	std::cout<<y++<<std::endl;
	}
}
void aman::prints(int z)
{
	for (int i=0;i<=3;i++)
	{
	std::cout<<z++<<std::endl;
	}
}
