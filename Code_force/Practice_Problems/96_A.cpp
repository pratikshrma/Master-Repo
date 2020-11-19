#include <iostream>
using namespace std;
int main(){
	string  x;
	cin>>x;
	int one=0;
	int zero=0;
	for(int i=0;i<x.length();i++){
		if(x[i]=='1'){
			one++;
			zero=0;
		}
		else{
			zero++;
			one=0;
		}
		if(one>=7){
			cout<<"YES"<<endl;
			return 0;
		}
		if(zero>=7){
			cout<<"YES"<<endl;
			return 0;
		}

	}
	cout<<"NO"<<endl;

	return 0;
}