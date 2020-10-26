#include <iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
	for(int i=0;i<=n;i++){
		if(arr[i]==key){
			return i+1;
		}
	}
	return -1;
}

int main(){
	int n;
	cout<<"Enter the size of the array\n";
	cin>>n;
	int arr[n];
	cout<<"Now enter the array:-\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Now enter the key\n";
	cin>>key;

	cout<<linearSearch(arr,n,key)<<endl;
	return 0;

}