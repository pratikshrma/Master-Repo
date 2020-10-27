//1rs=1chocolate
//3 chocolate rapper = 1 chocolate
// tell how many chocolate you can buy 

#include <iostream>
using namespace std;
int main(){
	int money;
	cout<<"so how much you got:- ";
	cin>>money;
	int chocolate=0;
	int rapper=0;
	while(money>=1){
		if(money>=1){
			chocolate++;
			rapper++;
			money--;
		}
		if(rapper>=3){
			chocolate++;
			rapper-=2;
		}	
	}
	cout<<chocolate<<endl;
}