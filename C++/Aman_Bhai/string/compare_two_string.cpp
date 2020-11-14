#include <iostream>
using namespace std;
int main(){
	string s1="abc";
	string s2="abc";

	// cout<<s2.compare(s1)<<endl;
	if(s1.compare(s2)==0)  //ye ham ye bhi "!s1.compare(s2)"  bhi use kar sakte the  
		cout<<"string are similar";
	else 
		cout<<"string are not similar";

	return 0;
}