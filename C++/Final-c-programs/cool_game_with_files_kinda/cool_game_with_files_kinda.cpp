#include <iostream>
#include <fstream>

using namespace std;
int gwtw();
void displayitems(int x);
//main function========================================================
int main()
{	
	
	int wtw;//what they want
	wtw = gwtw();//get what they want;
	while(wtw!=4)
	{
		switch(wtw)
		{
			case 1:
			displayitems(1);
			break;
			case 2:
			displayitems(2);
			break;
			case 3:
			displayitems(3);
			break;

			}
		wtw = gwtw();
		
		
		
		}
	
	return 0;
}

//get what they want function===========================================
int gwtw()
{
	int choice;
	cout<<"\n"<<endl;
	cout<<"1- just plain items"<<endl;
	cout<<"2- helpful items"<<endl;
	cout<<"3- harmful items"<<endl;
	cout<<"4- quit program \n"<<endl;
	try
	{
	cin>>choice;
	if(choice>4)
	{
		throw 404;
		}
	}
	catch(int q)
	{
		cout<<"ERROR "<<q<<" NOT FOUND ENTER A VALID CHOICE!!"<<endl;
		}
	return choice;
	
	
	}
// display items function================================================
void displayitems(int x)
{
	ifstream objectfile("objects.txt");
	string name;
	double power;
	
	if(x==1)
		while(objectfile >> name>> power)
		{
			if(power==0)
			{
				cout <<name << "  " << power <<endl;
				
				}
			
			}
	
	if(x==2)
		while(objectfile >> name>> power)
		{
			if(power>0)
			{
				cout <<name << "  " << power <<endl;
				
				}
			
			}
	if(x==3)
		while(objectfile >> name>> power)
		{
			if(power<0)
			{
				cout <<name << "  " << power <<endl;
				
				}
			
			}
	
	}







