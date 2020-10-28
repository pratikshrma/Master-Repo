// find the maximum bw the two numbers 
# include <iostream>
#include <climits>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the array ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int MAX=INT_MIN;
	int MIN=INT_MAX;
	for(int i=0;i<n;i++){
		if(MAX<arr[i]){
			MAX=arr[i];
		}
		if(MIN>arr[i]){
			MIN=arr[i];
		}
	}
	cout<<"SO the minimux in this list is "<<MIN<<endl;
	cout<<"SO the maximum in this list is "<<MAX<<endl;
	return 0;
}