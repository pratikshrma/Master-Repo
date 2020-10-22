#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	if (a==0)
	{
		return b;
	}
	gcd(b%a,a);
}
int main()
{
    int a,b;
    cout<<"Enter something";
    cin>>a>>b;
    if(a>b)
    	{cout<<gcd(a,b)<<endl;}
	else{
		cout<<gcd(b,a)<<endl;}
    return 0;
}

//ramensh