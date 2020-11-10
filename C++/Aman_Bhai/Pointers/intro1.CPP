#include <iostream>
using namespace std;
int main(){

	int a=10;
	cout<<a<<endl;

	int *aPtr=&a;
	*aPtr=20;
	cout<<*aPtr<<endl;



	return 0;
}