#include <iostream>
using namespace std;
int main()
{
	try{
		 int momage=50;
		 int sonsage=34;
		 
		 if(sonsage>momage)
		 {
			 throw 99;
			 }
		
		}
		 catch(int x)
		{
			cout<<"son cannot be older than mom ,error no :"<<x<<endl;
			}
	
	return 0;
	}
