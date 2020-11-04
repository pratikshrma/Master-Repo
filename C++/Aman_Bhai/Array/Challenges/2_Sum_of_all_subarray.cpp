#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"So sum of are :- ";
	for(int i=0;i<=n-1;i++){
		for(int j=i;j<=n-1;j++){
			sum+=arr[j];
			cout<<sum<<" ";
		}
	sum=0;
	}

	return 0;
}