// check if there exists two elements in an array such that their sum is equal to given k
// if you found the value then print true otherwise false


#include <iostream>
using namespace std;

bool pariSum(int arr[],int n,int k){//iski time complexity hei O(N2)
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==k){
				cout<<i<<" "<<j<<endl;
				return true;
			}
		}
	}
	return false;
}

bool PairSum(int arr[],int n,int k){
	int low=0;
	int high=n-1;
	
	while(low<=high){
		if(arr[low]+arr[high]==k){
			return true;
		}
		else if(arr[low]+arr[high]<k){
			low++;
		}
		else{
			high--;
		}
	}
	return false;
}

int main(){
	int a[]={2,4,7,11,12,16,20,21};
	int n=8;
	int k=31;

	cout<<pariSum(a,n,k)<<endl;
	cout<<PairSum(a,n,k);


	return 0;
}