#include <iostream>
#include <climits>//this is for INT_MIN
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of the array\n";
	cin>>n;
	cout<<"Now the array elements \n";
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int biggest=INT_MIN;
	for(int i=0;i<n;i++){
		biggest=max(biggest,array[i]);
	}
	cout<<"The biggest element is "<<biggest<<endl;


}