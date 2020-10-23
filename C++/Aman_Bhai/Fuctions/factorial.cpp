// factorial of 4 if 4*3*2*1=SOMETHING()

#include <iostream>
using namespace std;
int factorial(int n){
	int fac=1;
	for(int i=2;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
}
int main(){
	int n;
	cin>>n;
	int ans=factorial(n);
	
	cout<<ans<<endl;
	return 0;
}