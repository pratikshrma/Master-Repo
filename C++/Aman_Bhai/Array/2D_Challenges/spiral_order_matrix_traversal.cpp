// to isme hota ye he ki jse hamara matrix hei 
// 1 2 3
// 4 5 6
// 7 8 9

// to iska ans	 1 2 3 6 9 8 7 4 5 	ye hoga spiral order mei 

#include <iostream>
using namespace std;
int main(){
	int yo;
	cin>>yo;
	while(yo--){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	// Now lets code that spiral thingi

	int row_begin=0;
	int row_end=n;
	int column_begin=0;
	int column_end=m;
	// cout<<"Here goes the while\n";
	while(row_end>row_begin && column_end>column_begin){
		// cout<<"yo we are in the while\n";
		// lets print the first row
		for(int i=column_begin;i<column_end;i++){
			cout<<a[row_begin][i]<<" ";
		}
		row_begin++;

		for(int i=row_begin;i<row_end;i++){
			cout<<a[i][column_end-1]<<" ";
		}
		column_end--;

		if(row_begin<row_end){
			for(int i=column_end-1;i>column_begin;i--){
				cout<<a[row_end-1][i]<<" ";
			}
			row_end--;
		}

		if(column_begin<column_end){
			for(int i=row_end-1;i>row_begin;i--){
				cout<<a[i][column_begin]<<" ";
			}
			column_begin++;
		}



	}
}


	return 0;
}


// fk pata ni kar dekta hei ab isko