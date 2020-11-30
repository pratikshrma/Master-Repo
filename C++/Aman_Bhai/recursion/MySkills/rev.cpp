#include <iostream>
#include <string>
using namespace std;

void Rev(string str,int len){
	if(str.length()==len){
		return;
	}
	Rev(str,len+1);
	cout<<str.substr(len,1)<<endl;
}

int main(){
	string str="Bindo";
	Rev(str,0);

	return 0;
}