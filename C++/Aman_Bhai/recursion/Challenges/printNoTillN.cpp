//so now you gotta print no till N using recursion

#include <iostream>
using namespace std;
void IprintNo(int n){  //this is for increasing numbers 
	if (n==0)
	{
		return;	
	}
	IprintNo(n-1);
	cout<<n<<endl;
}
void DprintNo(int n){  //this is for Decreasing numbers 
	if (n==0)
	{
		return;	
	}
	cout<<n<<endl;
	DprintNo(n-1);
}
int main(){
	int n=100;
	DprintNo(n);


	return 0;
}