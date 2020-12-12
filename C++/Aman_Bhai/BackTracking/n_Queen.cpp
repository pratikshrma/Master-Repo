/*
n*n chess board with n queens such that no queens shoud attack each 
other in all possible directions

0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0

(one is queen and 0 is empty space)
{
	they all should be in a diff rows / coulums/ diagonals other 
	wise they can attack each other
}

to ham input dega dega n or usse pehle to hamko pehle n*n ka aray banana hei or uske 
bad usme queen bhi place karni hei
 4 ka output ye hoga

0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0

*/

#include <iostream>
#include <string>
using namespace std;
int main(){

	int n;
	cin>>n;
	int** arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[n];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=to_string(i).append(to_string(j));
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}