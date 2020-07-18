#include <iostream>
using namespace std;
int main()
{
	int x=0;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		if(i%2==1)
		{
			cout<<"I hate ";
			if(i==x)
			{
				cout<<"it";
				
				}
				else{
						cout<<"that ";
					}
			}
		else if(i%2==0)
		{
			cout<<"I love ";
			if(i==x)
			{
				cout<<"it";
				
				}
				else{
						cout<<"that ";
					}	
			}
		}
	
	return 0;
}
