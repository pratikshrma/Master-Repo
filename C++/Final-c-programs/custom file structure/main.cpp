#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream thefile("players.txt");//of to write data if to read data/contents of the file
	
	cout<<"Enter Player ID, Name ,and Money"<<endl;
	cout<<"press ctrl+z to quit!! inn windows i guess??"<<endl;//read this shit http://courses.washington.edu/css342/zander/Notes/eof.html to know why this dosent work in linux
	cout<<"in our case press -1 to quit when entering the next persons idnumber"<<endl;
	
	
	int idnumber;
	string name;
	double money;
	
	while(cin>>idnumber)
	{
		if(idnumber==-1)
		{
			break;
			
			}
		thefile<<idnumber;
		
		cin>>name>>money;
		thefile<<"----"<<name<<"-----"<<money<<endl;
		}
	
	
	return 0;
	}
