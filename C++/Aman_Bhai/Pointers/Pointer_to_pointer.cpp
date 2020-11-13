#include <iostream>
using namespace std;
int main(){
	int a=10;
	int *ptr=&a;
	cout<<ptr<<endl;
	// cout<<*ptr<<endl;

	int **doublePrt=&ptr;
	cout<<doublePrt<<endl;
	// cout<<&a<<endl;//aage & jaga ke memoy address bhi print ho jata hie 

	cout<<*doublePrt<<endl; //yaha pe  ek bar dereference kia hei  to ptr ki memory location print hogi
	cout<<**doublePrt<<endl;//yaha pe ** 2 star hei matlab ham isko 2 bar dereference kar rahe hei to isme a ki value print hogi




	return 0;
}