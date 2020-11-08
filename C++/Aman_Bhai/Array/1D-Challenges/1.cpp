#include <iostream>
#include <climits>
using namespace std; 
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<"Now enter the  max till this which element ";
	int number;
	cin>>number;
	int maxElement=0;
	for(int i=0;i<number;i++){
			if(arr[i]>maxElement){
				maxElement=arr[i];
			}
		}
	cout<<"\n"<<maxElement<<endl;


	return 0;
}