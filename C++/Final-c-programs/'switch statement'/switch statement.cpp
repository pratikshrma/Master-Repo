#include <iostream>
using namespace std;
int main()
{
	int age ;
	cout<<"enter your age"<<endl;
	cin>>age;
	switch(age)
	{
		case 16:
		cout<<"hey you can drive now"<<endl;
		break;
		case 18:
		cout<<"go buy some lotto tickets"<<endl;
		break;
		case 21:
		cout<<"go buy some bear"<<endl;
		break;
		default:
		cout<<"sorry you get nothing"<<endl;
		}
	
	return 0;
}
