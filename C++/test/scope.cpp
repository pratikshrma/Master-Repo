#include <iostream>
using namespace std;
int main(){
	int a=0;
	int *ptr=&a;
	cout<<ptr<<endl;	//Memory Address
	cout<<a<<endl;		//value of a
	cout<<&a<<endl;		//Memory Address

	return 0;
}