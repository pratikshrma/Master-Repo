// nCr=n!/(r!(n-r)!)

// ye nikalna hei
#include <iostream>
using namespace std;
int main()
{
	int N,R;
	cout<<"Enter the total no of objects"<<endl;
	cin>>N;
	cout<<"Enter the no of choosing objects"<<endl;
	cin>>R;
	int C=NCR(N,R);
	cout<<"So the total no of Combination are "<<C<<endl;
	return 0;
	
}