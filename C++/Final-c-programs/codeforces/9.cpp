#include <iostream>
using namespace std;
int main()
{	
	int money;
	cin>>money;
	int cash=0;
	if(money>100)
	{
	while(money>100)
		{
		
		money =money/100;
			cash++;
		}
	}
	if(money>=20)
	{	
	while(money>=20)
		{
		
		money =money/20;
			cash++;
		}	
	}
	if(money>10)
	{
	while(money>10)
		{
		
		money =money/10;
			cash++;
		}
	}
	if(money>=5)
	{
	while(money>5)
		{
		
		money =money/5;
			cash++;
		}
	}
	if (money>=1)
	{
	while(money>=1)
		{
		
		money =money/1;
			cash++;
	}
		}
	cout<<cash<<endl;
	
	
	return 0;
}
