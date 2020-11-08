#include <iostream>
using namespace std;
int main(){
	int find_it;
	cin>>find_it;
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}

	// now searching in an array
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(find_it==arr[i][j])
				{cout<<"Found It";}
		}
	}

	return 0;
}