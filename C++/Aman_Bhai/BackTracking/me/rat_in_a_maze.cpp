//so now lets code rat in a maze by myself


#include <iostream>
using namespace std;
bool isSafe(int *arr,int x,int y,int n){
	if(x<n && y<n && arr[x][y]=1){
		return true;
	}
	return false;

}
bool ratInAMaze(int *arr,int x,int y,int n,int *solArr){
	if(isSafe(&arr,int x,int y,int n)){
		
	}

}

int main(){
	int arr[5][5];
	int solArr[5][5];

	int n=5;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			solArr[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	ratInAMaze(&arr,0,0,n,&solArr);






	return 0;
}