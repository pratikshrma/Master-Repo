#include <iostream>
using namespace std;
int main()
{
	int x;
	int y;
	int *ptr=&x;
	int *ptr1=&y;
	*ptr = 32;
	*ptr1 = 43;
	cout<<x<<endl;
	cout<<y;
	
	return 0;
}
