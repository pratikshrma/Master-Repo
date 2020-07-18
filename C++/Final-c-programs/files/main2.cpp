#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream buckyfile("chicken.txt ");//it will show else if you forget to associate the file 
	
	if(buckyfile.is_open())
	{
		cout<<"ok file is open"<<endl;
		}
	else
	{
		cout<<"you messed up son"<<endl;
		
		}
	buckyfile<<"i love the chicken"<<endl;
	buckyfile.close();
	
	return 0;
}
					
