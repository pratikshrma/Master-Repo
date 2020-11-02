// to main concept yei hei ki insert an elemnt form unsorted array to its correct position in sorted array

#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=1;i<n;i++){
		int currrent = arr[i];
		int j=i-1;
		while(arr[j]>currrent && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=currrent;
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}