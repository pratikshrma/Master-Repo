// acha to is que mei ek catch hei iski rows and columns are sorted in relation to each other now find a given value
// ab directly brute force to kar hi sakte hei or uske time complexity O(nm) aa jai gi

// it is a super imp que and is also asked in many interview 
#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	cout<<"enter the array"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Now enter what you wanna find"<<endl;
	int find;
	cin>>find;

	// now lets use the logic that i have learned 
	// to is algo ko ham 2 jagha se shuru kar sakte hei vo hei top right corner and bottom left corner

	// this is top right approch


	int row=0;//dekh n rows hei kyuki ye batata hei ki hamare pas kitni rows hei
	int column=m-1;//dekh m columns hei kyuki ye batata hei ki hamare pas kitni columns hei




	while(row<=n && column>=0)
	{
		if(arr[column][row]==find){
			cout<<"Got IT"<<endl;
			return 0;
		}
		else if(arr[column][row]>find){
			column--;
		}
		else{
			row++;
		}
	}

	

	// // now bottom left approch
	// int row1=n-1;
	// int column1=0;
	// while(column1<=m && row1>=0){
	// 	if(arr[row1][column1]==find){
	// 		cout<<"Got it the second time as well"<<endl;
	// 		return 0;
	// 	}
	// 	else if(arr[row1][column1]<find){
	// 		 column1++;
	// 	}
	// 	else{
	// 		row1--;
	// 	}
	// }

	cout<<"Nope it is not in the Matrix"<<endl;
	return 0;
}