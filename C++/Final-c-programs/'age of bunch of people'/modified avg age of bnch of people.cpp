#include <iostream>
using namespace std;
int main()
{
	int age;
	int agetotal=0;
	int nop=0;//noo of people entered
	cout<<"enter first person age or press -1 to quit"<<endl;
	cin>>age;
	while (age!=-1)
	{
		agetotal=agetotal+age;

		nop++;
		cout<<"enter next person age"<<endl;
		cin>>age;
		}
		cout<<"number of people "<< nop<<endl;
		cout<<"avg age is "<< agetotal/nop<<endl;
		return 0;
	}
