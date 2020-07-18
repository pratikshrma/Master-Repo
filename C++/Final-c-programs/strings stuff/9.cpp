#include <iostream>
#include <string>  //gives you string function
using namespace std;
int main()
{
	string s1("hi my name is aman and i love chicken");
	cout<<s1<<endl;
	s1.replace(14,4,"jacky chan");
	cout<<s1<<endl;
	return 0;
}

