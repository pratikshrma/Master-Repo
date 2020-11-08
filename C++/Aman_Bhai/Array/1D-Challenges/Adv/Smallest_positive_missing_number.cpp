//so the que is to find the smallest missing no in the arrray as the array is 1235678899 so the first +ve missing no is 4 
// bas itna hi karna hei isme


// isme attendence list vali approch lagagi NOICE

#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int no=1000000;
	bool attendence_list[no];
	for(int i=0;i<no;i++){
		attendence_list[i]=0;
	}
	for(int i=0;i<n;i++){
		if(a[i]>=0){
			attendence_list[a[i]]=1;
		}
	}
	for(int i=1;i<no;i++){
		if(attendence_list[i]==0){
			cout<<"so the variable is "<<i<<endl;
			break;
		}
	}
	return 0;



}