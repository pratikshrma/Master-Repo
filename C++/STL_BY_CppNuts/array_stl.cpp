/* Topic std::array       -- so first thing it's not that simple array int a[5];  its not this its syntax is diff
							in adv c++ we have much more than this { int a[5]; }

	T: Type eg int char double etc
	N: Size

	Syntax : std::array<T,N> hello;

	Notice:
	1>std::array is a container that encapsulates fixed size of array.
	2>array size is needed at compile time{
	int n;
	cin>>n;
	int arr[n];

	You can not do this sort of shit!!
	}
	3>Assign by value is actually by value  {now with simple method you would actually only a pointer}
	4>Access Elements:
		a>at()
		b>[]  		//this is just an overloaded operator and works sama as at()   so why do we even need this??
						at() -- this will throw an exception(out of bound) in case you access something that is not in the
						array  
						but the simple []  will not throw that execption
		c>front()
		d>back()
		e>data()  //gives access to underlying array	 //this will just pass an array
	size()
	fill()  //just read about this it is important

*/


#include <iostream>
#include <array>

using namespace std;
int main(){
	//Declear
	std::array<int,10> hello0;
	//initialization
	std::array<int,6> hello={1,2,3,4,5,6}; //initializer list
	std::array<int,6> hello2 {1,2,3,4,5,6}; //uniform initializer

	cout<<hello.at(4)<<endl;  //but it will give this acception 'std::out_of_range'  so its quite convinent
	cout<<hello[8]<<endl;  //see it will not throw an exception 

	//assign using initializer list
	hello0={1,2,3,34,4,4,4};
	/*
	here you can do this ie declear an array in a diff line and then initialize it in a diff line
	it is not possible with the simple int a[5];   array
	*/



	return 0;
}