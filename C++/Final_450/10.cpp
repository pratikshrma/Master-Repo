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
		int total_steps=sizeof(arr)/sizeof(arr[0]);
		int counter=0;
		while(total_steps<=arr[n-1]){
			int arr_now=0;
			total_steps+=arr[arr_now];



			counter++;
		}
	}

	return 0;
}