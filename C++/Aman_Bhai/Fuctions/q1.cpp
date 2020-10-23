// print all prime numbers bw 2given numbers
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(isPrime(i)==true)
		{
			cout<<i<<" is prime"<<endl;
		}
	}

	return 0;
}