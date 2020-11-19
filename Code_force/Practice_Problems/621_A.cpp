#include <climits>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];  //bc yaha dekh ke lika kar bc 30 min barbad kia kyuki
		// yaha pe i ki jagha n likha hua tha :( BC.
	}
	int smallest_odd=INT_MAX;
	for(int i=0;i<n;i++){
		int Div=arr[i]%2;
		if(arr[i]<smallest_odd && Div==1){
			smallest_odd=arr[i];
		}
	}
	unsigned long long int total=0;
	for(int i=0;i<n;i++){
		total+=arr[i];
	}
	if(total%2==1){
		total-=smallest_odd;
	}
	cout<<total<<endl;

	return 0;
}