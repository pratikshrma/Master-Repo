#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int one=0;
	int max=0;
	double arr[n*2];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		arr[n+i]=arr[i];
	}
	for(int i=0;i<2*n;i++){
		if(arr[i]==1){
			one++;
			if(max<one)
				max=one;
		}
		else{
			one=0;
		}
	}
	cout<<max<<endl;


	return 0;
}