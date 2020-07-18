#include <iostream>//strings are indeed array of character
#include <string>  //gives you string function
using namespace std;
int main()
{
	string s1 ="omgaman";
	cout<<s1.at(3);
	cout<<s1[3];
	int size=s1.size();
	
	for(int x=0;x<size;x++)
	{
		cout<<s1.at(x);
									//they both do the same shit
		}
	
	for(int x=0;x<s1.length();x++)
	{
		cout<<s1.at(x);
		
		}
	
	return 0;
}

