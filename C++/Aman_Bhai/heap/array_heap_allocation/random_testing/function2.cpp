#include <iostream>
using namespace std;
int main(){
	int n=5;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	cout<<a[2]<<endl;


	return 0;
}