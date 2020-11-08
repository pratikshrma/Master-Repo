// is que mei ye hei ki all possible subarray print karne hei jse ki array hei {1,2,4}
// to iska ans hoga {{1},{1,2},{1,2,3},{2},{2,3},{3}}

// to ye karna hei bas


#include <iostream>
using namespace std;
int main(){
	 int n;
	 cin>>n;
	 int arr[n];
	 for(int i=0;i<n;i++){
	 	cin>>arr[i];
	 }
	 for(int i=0;i<n;i++){
	 	for(int j=i;j<n;j++){
	 		for(int k=i;k<=j;k++){
	 			cout<<arr[k]<<" ";
	 		}
	 		cout<<endl;	 	}
	 }

	return 0;
}