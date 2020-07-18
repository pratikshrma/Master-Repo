#include <iostream>
using namespace std;
int main()
{	
	int nop;
	cin>>nop;
	int n[nop-1];
	int h =0;
	for (int i=0;i<nop;i++)
	{
		cin>>n[i];
		if (n[i]==1)
		{
			h++;
		}
		
	}
	if (h>=1)
	{
		cout<<"hard"<<endl;
	}
	else
	{
		cout <<"easy"<<endl;
	}
	return 0;

}
