#include <iostream>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=arr[i];
		}
		if(sum==0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
}


	return 0;
}