#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	//so that how you allocate an 2 array in a heap

	int **arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[n];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}


	return 0;
}