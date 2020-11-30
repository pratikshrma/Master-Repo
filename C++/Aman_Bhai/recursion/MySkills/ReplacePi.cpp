#include <iostream>
using namespace std;
void ReplacePi(string str){
	if(str.length()==0){
		return; 
	}
	if(str[0]=='p' && str[1]=='i'){
		cout<<3.14;
		str=str.substr(2);
	}
	else{
		cout<<str[0];
		str=str.substr(1);
	}
	ReplacePi(str);
}
int main(){
	string str="pippippi";///isme 3 pi aane cahia
	cout<<str<<endl;
	ReplacePi(str);

	return 0;
}