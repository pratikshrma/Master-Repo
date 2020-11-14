// so in this you have to convert a string to full lower case or full upper case

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){

	string str="fHJDdskDjklFDSdsGj";
	for(int i=0;i<str.size();i++){
		if(str[i]<='a'){
			str[i]+=32;
		}
	}
	cout<<str<<endl;

	return 0;
}