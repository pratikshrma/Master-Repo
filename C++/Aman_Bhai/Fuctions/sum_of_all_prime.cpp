#include <iostream>
using namespace std;
int natural(int n){
	int yo=0;//the sum of number
	for(int i=1;i<=n;i++)
	{
		yo+=i;
	}
	return yo;
}
int main(){
	int n;
	cout<<"Enter something \n";
	cin>>n;
	int ans=natural(n);
	cout<<"So the sum of all the natural number is "<<ans<<endl;
}