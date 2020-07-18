#include <iostream>
#include <cstring>
using namespace std;
int main()
{	
	string b;			//po,desu,minda
	cin>>b;
	string last;
	int size =b.size();
	for (int i=size-1;i>=0;i--)
		{

			last=b[i]+last;
			if(last=="po")
				{
				cout<<"FILIPINO"<<endl;
				break;
				}
			else if(last=="desu")
				{
				cout<<"JAPANESE"<<endl;
				break;
				}
	
			else if(last=="masu")
				{
				cout<<"JAPANESE"<<endl;
				break;
				}
			else if(last=="mnida")
				{
				cout<<"KOREAN"<<endl;
				break;
				}
	
		}
	return 0;
}
