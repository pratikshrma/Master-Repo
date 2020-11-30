#include <iostream>
#include <string>
using namespace std;
void removeStr(string str){
	if(str.length()==0){
		return;
	}
	if(str[1]!=str[0]){
		cout<<str[0];	
		removeStr(str.substr(1));
	}

	if(str[1]==str[0]){
		removeStr(str.substr(1));
	}
}


string removeDup(string s){
	if(s.length()==0){
		return "";
	}
	char ch=s[0];
	string ans=removeDup(s.substr(1));
	if(ch==ans[0]){
		return ans;
	}
	return (ch+ans);
}

int main(){
	// string str="aabbbbccccdddd";
	// cout<<removeDup("aabbbbccccdddd");
	removeStr("aabbbbccccdddd");


	return 0;
}