#include <iostream>
#include <string>  //gives you string function
using namespace std;
int main()
{
	string s1("hamster  ");
	string s2;
	string s3;
	
	s2=s1;
	s3.assign(s1);
	cout<<s1<<s2<<s3<<endl;
	return 0;
}

