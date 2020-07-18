#include <iostream>
using namespace std;
int main()
{
	double aman[10];  /* guess you need to know how many elements are in this array you can find that 
						if you konow its size with basic maths
						* but it is actually used with pointers spoilers:p*/
	cout <<sizeof(aman)<<endl;
	cout<<sizeof(aman)/sizeof(aman[0]);// this should give you no of elements in your array
	return 0;
}
