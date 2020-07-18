#include <iostream>
using namespace std;//now we will use multiple parameters 

template <class first, class second>
first smaller(first a, second b)
{
	return (a<b?a:b);
	
}

int main()
{
	int x=89;
	double y=63.789;
	cout<<smaller(y,x)<<endl;
	return 0;
	
}
