#include <iostream>
using namespace std;
int main()
{
	int i;
	int k;
	cin>>i>>k;
	for(int x=0;x<k;x++)
	{
		if(i%10==0)
		{
			i=i/10;
		}
		else 
		{
			i=i-1;
		}
	
	}
	
	cout<<i<<endl;
	
	return 0;
	
}
