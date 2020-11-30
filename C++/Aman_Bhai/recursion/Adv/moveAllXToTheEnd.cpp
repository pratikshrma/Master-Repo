#include <iostream>
#include <string>
using namespace std;


int X=0;
void printX(int x){
	for(int i=0;i<x;i++){
		cout<<"X";
	}
}
void removeX(string str){
 	if(str.length()==0){
 		printX(X);
 		return;
 	}
 	if(str[0]=='X'){
 		X++;
 		removeX(str.substr(1));
 	}	
 	else{
 		cout<<str[0];
 		removeX(str.substr(1));
 	}
 }

int main(){

	removeX("AXBXCXDX");

	return 0;
}