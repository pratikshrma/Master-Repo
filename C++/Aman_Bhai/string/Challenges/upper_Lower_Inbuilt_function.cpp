#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){

	string s="jfdkJKDSjfdkJKDjkd";
	transform(s.begin(),s.end(),s.begin(),::toupper);  //ab dekh yaha pe hamne 1st memory location di or last memory location di strings bhi apne aap mei pointers hi hota hie
	cout<<s<<endl;

	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s<<endl;


	return 0;
}