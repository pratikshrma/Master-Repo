//in this que you just need to rev a string using recursion

#include <iostream>
#include <string>

using namespace std;
void Rev(string s){
	if(s.length()==0){
		return;
	}
	string ros=s.substr(1);
	Rev(ros);
	cout<<s[0]<<endl;
}

int main(){
	string str="ApniKaksha";
	
	Rev(str);

	return 0;
}