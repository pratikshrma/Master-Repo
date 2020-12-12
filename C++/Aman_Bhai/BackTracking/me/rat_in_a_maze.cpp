/*
to ham bas 1mei ja sakte hei 0 matlab vaha pe wall hei
test example;- 
1 0 0 0
1 1 1 1
0 1 0 0 
1 1 1 1

iska ans
1 0 0 0
1 1 0 0
0 1 0 0 
0 1 1 1

*/

#include <iostream>
using namespace std;

bool isItSafe(int *arr,int x,int y,int n){
	if(arr[x][y]=1 && x<n && y<n){
		return true;
	}
	return false;
}

bool SolveMaxe(int *arr,int x,int y,int n,int *solArr){
	if((x==(n-1)) && (y==(n-1))){
		solArr[x][y]=1;
		return true;
	}

	if(isItSafe(arr,x,y,n)){
		//back trakiing code
		solArr[x][y]=1;
		if(SolveMaxe(arr,x+1,y,n,solArr)){
			return true;
		}
		if(SolveMaxe(arr,x,y+1,n,solArr)){
			return true;
		}
		solArr[x][y]=0;
		return false;
	}
	return false;
}

int main(){
	//so  this is the rat in a maze
	int n;
	cin>>n;

	int *arr=new int[n][n]();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			solArr[i][j]=0;
		}
	}
	int *solArr=new int[n][n];
	//to finally hamko mouse to 0,0 se n,n tak le jana assuming ye sq hei 
	SolveMaxe(arr,0,0,n,solArr);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	

	return 0;
}