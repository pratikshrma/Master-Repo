#include <iostream>
using namespace std;
void yo(int arr[]){
	int size=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				int swp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=arr[j];
			}
		}
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter the size of the List ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	yo(arr);
}