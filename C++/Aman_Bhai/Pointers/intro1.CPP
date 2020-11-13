#include <iostream>
using namespace std;
int main(){

	// int a=10;
	// cout<<a<<endl;

	// int *aPtr=&a;
	// *aPtr=20;
	// cout<<*aPtr<<endl;
	int arr[]={10,20,30,40};
	cout<<*arr<<endl;

	int *ptr=arr;
	for(int i=0;i<3;i++){
		cout<<*(arr+1)<<endl;//ab tu soch raha hoga ki +4i kyu ni kia vo isliye kyuki arr hamara arr hamara indexing pointer hei ye memory pointer 
		//ni hei isliye +1 kar ke cam chal raha hie to +1 karke ye next index pe jata hei naki next memory index pe COOL COOL COOL!!!
		
		ptr++;
	}

	return 0;
}