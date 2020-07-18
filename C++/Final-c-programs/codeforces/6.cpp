#include <iostream>
using namespace std;
int main()
{

	int c;
	int b;
	cin>>c>>b;
	int y=0;
	while (c<=b)
	{
		c=c*3;
		b=b*2;
		++y;
	
	}
	cout<<y<<endl;
	return 0;
}
