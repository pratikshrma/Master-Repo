#include <iostream>
using namespace std;
int main(){
	string s1="abc";
	cout<<s1<<endl;

	s1.clear();
	if(s1.empty()){
		cout<<"the string is empty"<<endl;
	}

	return 0;
}