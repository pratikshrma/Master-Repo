#include <iostream>
using namespace std;
int main(){

	int a=10;
	int *aprt=&a;
	cout<<aprt<<endl;

	aprt++;//yaha pe ham -- ,+,- sab us kar sakte hei

	cout<<aprt<<endl;//boom ye +4 ke incriment pe aaya kyuki hamne ye int liya hei kyuki int ka size bhi 4bytes hei

	return 0;
}