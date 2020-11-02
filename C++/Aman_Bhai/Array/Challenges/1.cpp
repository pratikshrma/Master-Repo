#include <iostream>
#include <climits>
using namespace std; 
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[n];
	}
	cout<<"Now enter the  max till this which element ";
	int number;
	cin>>number;
	int maxElement=0;
	for(int i=0;i<number;i++){
			if(arr[i]>arr[i+1]){
				maxElement=arr[i];
			}

			cout<<"Max element is "<<maxElement<<endl;
		}
	cout<<"\n"<<maxElement<<endl;


	return 0;
}