// fk ye to simple hi tha LOL
// par sahi hei 

// agar confusion ho future mei to  aman bhai apna college 8.6  14:30


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
	int curr_sum=0;
	int Max=INT_MIN;
	for(int i=0;i<n;i++){
		curr_sum+=arr[i];
		Max=max(Max,curr_sum);
		if(curr_sum<0){
			curr_sum=0;
		}
	}
	cout<<Max<<endl;

	return 0;
}