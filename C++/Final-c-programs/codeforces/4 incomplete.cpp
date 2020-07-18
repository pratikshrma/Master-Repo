#include <iostream>
#include <cstring>
using namespace std;
int main()
{	
	string b;			//po,desu,minda
	int n;
	cin>>n;
	
	string last;
	for(int x=0;n>x;x++)
	{
		cin>>b;
		int size =b.size();
	for(int i=size-1;i>=0;i--)
		{
			

			last=b[i]+last;
			if(last=="po")
				{
				cout<<"FILIPINO"<<endl;
				}
			else if(last=="desu" || last== "masu")
				{
				cout<<"JAPANESE"<<endl;
				
				}
			else if(last=="mnida")
				{
				cout<<"KOREAN"<<endl;
				
				}
			
		}	
	
	}
	
	return 0;
}
