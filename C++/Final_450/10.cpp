#include <iostream>

using namespace std;

int main(){
	int test;
	//cout<<"enter no of test cases"<<endl;
	cin>>test;

	while(test--){
		//cout<<"Enter size of the array"<<endl;
		int n;
		cin>>n;
		int arr[n];
		for(int i=1;i<=n;i++){
			cin>>arr[i];
		}
		int current_pos=1;
		int final_pos=n;
		int steps=0;
		// int i=0;
		while(current_pos<=final_pos){
			if(arr[current_pos]==0)
			{
				cout<<"-1";
				break;
			}
			current_pos+=arr[current_pos];
			steps++;
			if(current_pos>=final_pos){
				break;
			}
			
		}
		cout<<steps<<endl;
	}

	return 0;
}