// to jse hamne Rahul likhna hei to ham
// char arr[n+1]

// lega kyuki hamara jo last character hota hei vo ek null character hota hie jo hame btate hei ki han letter khatam ho gaya hei

// char arr[n+1]="rahul\0";


#include <iostream>
using namespace std;
int main(){
	 char arr[100]="Apple";
	 int i=0;
	 while(arr[i]!='\0'){
	 	cout<<arr[i]<<endl;
	 	i++;
	 }


	return 0;
}
