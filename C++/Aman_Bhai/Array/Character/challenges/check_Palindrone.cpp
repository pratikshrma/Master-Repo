// so palindone words hota hei jo opposite karke bhi same hi reta hei jse ki NITIN ya RACECAR

#include <iostream>
using namespace std;
int main(){
	char arr[100];
	cin>>arr;

	int n=0;
	while(arr[n]!='\0')
	{
		n++;
	}

	bool check=1;

	for(int i=0;i<n;i++){
		if(arr[i]!=arr[n-1-i]){
			cout<<"This is not a palindrone";
			return 0;
		}
	}
	cout<<"This is a palindrone";
	return 0;
}