// is vali approch ki time complexity O(n2) hei utni super ni hei par brute ke to kafi sahi hie


#include <iostream>
#include <climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int currSum[n+1];
	currSum[0]=0;
// or 0 is liye kia hei kyuki apne uper bhi to iterate karna hei like[-1,-8,-6,9,-5]  is case mei largest subaray 9 hi hoga tab karke
	for(int i=1;i<=n;i++){
		currSum[i]=currSum[i-1]+a[i-1];
	}

	int maxSum=INT_MIN;
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=0;j<i;j++){
			sum=currSum[i]-currSum[j];
			maxSum=max(sum,maxSum);
		}
	}

	cout<<maxSum;


	return 0;
}