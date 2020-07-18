#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	//of to write data if to read data/contents of the file
	ifstream thefile("players.txt");
	int id;
	string name;
	double money;
	
	while(thefile>>id>>name>>money)
	{
		cout<<id<<"--"<<name<<"---"<<money<<endl;
		
		}
		
	
	return 0;
	}
