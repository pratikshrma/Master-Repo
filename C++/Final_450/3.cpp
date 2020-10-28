#include <iostream>
using namespace std;
void yo(int arr[]){
	int size=5;
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(arr[j]>arr[i]){
				int swp=arr[j];
				arr[j]=arr[i];
				arr[i]=swp;
				}
		}
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n=5;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	yo(arr);
}