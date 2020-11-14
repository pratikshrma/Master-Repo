#include <iostream>
// #include <string>
using namespace std;
int main(){

	// string str;

	string s1="fam";
	string s2="ily";

	s1.append(s2);//append is used to add character to the end of the string
	cout<<s1<<endl;

	cout<<s1+s2<<endl; //ye hei directly use karne ke liye

	s1+=s2;
	cout<<s1<<endl;



	return 0;
}