#include <iostream>
using namespace std;
int main(){
	int arr[6][6];
	int one[2];
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){
				one[0]=i;
				one[1]=j;
			}
			
		}
	}
	// for(int i=0;i<=1;i++){
	// 	cout<<one[i]<<" ";
	// }
	int count=0;
	while(one[0]!=3 || one[1]!=3){ //and laga ke ye hua ki jab ek bhi condition match hui to boom loop se bahar
		if(one[0]>3){
			one[0]--;
			count++;
		}
		else if(one[0]<3){
			one[0]++;
			count++;
		}
		else if(one[1]>3){
			one[1]--;
			count++;
		}
		else if(one[1]<3){
			one[1]++;
			count++;
		}

	}
	cout<<count<<endl;


	return 0;
}