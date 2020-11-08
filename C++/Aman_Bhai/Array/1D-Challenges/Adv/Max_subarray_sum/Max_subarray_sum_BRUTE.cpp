// to isme ye karna hei ki sare subarray ka sum lena hei or usko print karna hei

// ye hei dumb brute force way isko karne ka elegent way bhi hei isko KADANE ALGO bolte hei 


// or han is brute ko bhi thoda acha karne ke bad is sare code ki bhi zarurat ni thi par esa hi rakha hei future ref ke liye

// or iski time complexity bhi O(N3) hei lol


#include <climits>
#include <iostream>
using namespace std;

// int subarray(int n){
// 	int total=n*((n+1)/2);
// 	return total;
// }

int main(){
	int n;
	cin>>n;
	// int subarray_total=subarray(n);
	// int Max_array[subarray_total];
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int MAX=INT_MIN;
	// int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int curr_sum=0;
			for(int k=i;k<=j;k++){
				curr_sum+=a[k];
			}
			MAX=max(MAX,curr_sum);
			// Max_array[count]=curr_sum;
			// count++;
		}
	}
	// int actual_Max=INT_MIN;
	// for(int i=0;i<subarray_total;i++){
	// 	actual_Max=max(actual_Max,Max_array[i]);
	// }
	// cout<<actual_Max<<endl;
	cout<<MAX<<endl;
	return 0;
}