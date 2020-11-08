// NOICE

// now this is O(n2) now time for super algo ir KADANE ALGO that is O(n)

#include <climits>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int currsum[n+1];
	currsum[0]=0;
	for(int i=1;i<=n;i++){
		currsum[i]=currsum[i-1]+arr[i-1];
	}

	int Max=INT_MIN;
	int Super_Max=INT_MIN;

	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			Max=currsum[i]-currsum[j];
			Super_Max=max(Max,Super_Max);
		}
	}
	cout<<Super_Max<<endl;


	return 0;
}