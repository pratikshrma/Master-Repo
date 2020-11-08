#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int arr[n];
	cout<<"So sum of are :- ";
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum+=arr[j];
		}
		cout<<sum<<" ";
	}


	return 0;
}