#include <iostream>
using namespace std;

void increment(int *a){//yaha se ham recieve karrne ke kiye ke pointer lega
	(*a)++;
}

int main(){

	int a=2;
	increment(&a); //yaha se ham ek address bhaje ge
	cout<<a<<endl;

	return 0;
}