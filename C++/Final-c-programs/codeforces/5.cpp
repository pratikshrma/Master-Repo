#include <iostream>
using namespace std;
int main()
{
	int m = 0;//matches
	int noem = 0;//no of exter matches
	int nom;//no of matches
	cin>>nom;
	for (int i=0;i<nom;i++)
	{
		cin>>m;
		while(m%2!=0 || m<3)  
		{
			m++;
			noem++;
			
		}
		cout<<noem<<endl;
		noem=0;
	} 
	

	return 0;
}
