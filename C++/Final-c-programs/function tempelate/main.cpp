#include <iostream>
using namespace std;

template <class bucky>//it makes a generic datatype and sees that ohh!! x is using double i must also use double 
						// for now youu cant have like x is int and y is float it works and we will learn that in future but till no its a no no!!
						

bucky addcrap(bucky a,bucky b)
{
	return a+b;
	
}


int main()
{
	float x=32.543,y=34.478,z;
	z=addcrap(x,y);
	cout<<z<<endl;
	return 0;
}
