#include <iostream>
using namespace std;

void moveAll(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int swp=arr[j];
				arr[j]=arr[i];
				arr[i]=swp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main(){
	// so move  all the -ve elements to the left side
	int n=5;
	int arr[n];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	moveAll(arr,n);
	return 0;
}