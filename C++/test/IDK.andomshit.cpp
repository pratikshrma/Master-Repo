#include <iostream>
#include <string>
using namespace std;
void name();
void  askname();
bool accept();



	void xdata()
		{
	cout<<"so just give me your data"<<endl;
	int d;
	string m;
	int y;
	cout<<"lets start with your dob"<<endl;
	cout<<"first date"<<endl;
	cin>>d;
	cout<<"now month"<<endl;
	cin>>m;
	cout<<"and year"<<endl;
	cin>>y;
	accept();
}
void askname()
{
	string name;
	cin>>name;
	cout<<"so your name is "<<name<<endl;
	xdata();
			}
bool accept()
{
cout << "Do you want to proceed (y or n)?\n";
char answer;
cin >> answer;
switch(answer)
{
	case 'y':
	name();
	break;
	case 'n':
	return false;
	default:
	cout<<"i will take that as a no"<<endl;
	return false;
	}
}
void name()
{
	cout<<"so what is your name"<<endl;
	askname();
	}
int main()
{
	accept();
	return 0;
	}
