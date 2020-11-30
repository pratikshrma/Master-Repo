//to isme karna ye hei ki jaha pe bhi pi aa raha hei vaha pe 3.14 kar dena hie


#include <iostream>
using namespace std;

void replacePi(string s){
	if(s.length()==0){
		return ;
	}
	if(s[0]=='p' && s[1]=='i'){
		cout<<"3.14"		;
		replacePi(s.substr(2));
	}
	else{
		cout<<s[0];
		replacePi(s.substr(1));
	}

}

int main(){
	replacePi("pipppiiipipipipipppppiii");


	return 0;
}