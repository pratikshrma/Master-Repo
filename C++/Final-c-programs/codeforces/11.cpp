#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
	int n;
	int no=0;
	int x;
	int y;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cin>>x>>y;
		for(int j=0;j<=x+y;j++)
		{
			
		if(y%x==0)
		{
			
			cout<<no<<endl;
			break;		
			} 
		
			x++;
			no++;
			
		}
	}
		
	return 0;
	}
