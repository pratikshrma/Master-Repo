// space complexity 2*n ke sath to ho jai ga ye par que hei same time comlexity mei kse kara ya kya possible bhi hei? han han possible hei
// bas matrix ko uske diagonal axis ke across switch kar dei vid apna college 9.2 


//space complexity O(n) bas ek hi case mei hoga jam no of rows == no of columns 


#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}


	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			int swp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=swp;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}






	return 0;
}