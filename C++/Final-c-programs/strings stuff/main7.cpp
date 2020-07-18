
#include <iostream>
#include <string>  //gives you string function
using namespace std;
int main()
{
	string s1("ham is spam oh yes i am!!");
	
	cout<<s1.find("am")<<endl;
	cout<<s1.rfind("am");
	
	return 0;
}
