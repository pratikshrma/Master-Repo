// print all the permutation of the string using recursion 

#include <iostream>
#include "run.h"
using namespace std;

void permutation(string s,string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	for(int i=0;i<s.length();i++){
		char ch=s[i];
		string ros=s.substr(0,i)+s.substr(i+1);
		//0 hamara starting point denote karta hei or i yaha pe length denote kar rahi hei
	
		permutation(ros,ans+ch);
	}

}

int main(){
	input();
	string str;
	cin>>str;
	permutation(str,"");

	return 0;
}