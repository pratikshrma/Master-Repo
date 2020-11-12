// is time ni pata kya scene hei isme ab kal hi dekta isko abhi brain bahot thak gaya hei abhi thodi dar pointer kar ke so jate


#include <iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;

	int m1[n1][n2];
	int m2[n2][n3];
	cout<<"Enter the elements of the first array"<<endl;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			cin>>m1[i][j];
		}
	}
	cout<<"Enter the elements of the second array"<<endl;
	for(int i=0;i<n2;i++){
		for(int j=0;j<n3;j++){
			cin>>m2[i][j];
		}
	}
	// MAIN LOGIC
	int ans[n1][n3];
	for(int i=0;i<n1;i++){
		for(int j=0;j<n3;j++){
			ans[i][j]=0;
		}
	}	
	

	for(int i=0;i<n1;i++){
		for(int j=0;j<n3;j++){
			for(int k=0;k<n2;k++){
				ans[i][j]+=m1[i][k]*m2[k][j];
			}
		}
	}
	// MAIN LOGIC
// okie okie 
	for(int i=0;i<n1;i++){
		for(int j=0;j<n1;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}	


	return 0;
}