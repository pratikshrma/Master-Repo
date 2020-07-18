#include <iostream>
#include <string>  //gives you string function
using namespace std;
int main()
{
	string s1("omg i think i am awsm!!");
	cout<<s1.substr(3,7)<<endl;
	cout<<s1.substr(3,8)<<endl;//FIRST IS FOR THE THE FIRST CHARACTER AND SECOND IS FOR HOW DEEP!!
	cout<<s1.substr(3,9)<<endl;
	cout<<s1.substr(3,10)<<endl;
		
		
		
	return 0;
}
