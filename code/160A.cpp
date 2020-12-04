#include <iostream>
// #include "run.h"
using namespace std;
int main(){
	// input();
	int n;
	cin>>n;
	int arr[n];
	int total_sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		total_sum+=arr[i];
	}
	int half=total_sum/2;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				int swp=arr[i];
				arr[i]=arr[j];
				arr[j]=swp;
			}
		}
	}
	int coins=0;
	int coin_val=0;
	for(int i=0;i<n;i++){
		if(coin_val>half){
			//cout<<i<<endl;
			break;
		}
		coins++;
		coin_val+=arr[i];
	}
	cout<<coins<<endl;
	return 0;
} 