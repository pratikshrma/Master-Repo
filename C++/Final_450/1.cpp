#include <iostream>
using namespace std;
void rev(int array[]){
	int revArray[5];
	for(int i=0;i<=5;i++){
		revArray[i]=array[4-i];
	}
	cout<<endl;
	for (int i=0;i<5;i++)
	{
		cout<<revArray[i]<<" ";
	}
}
int main(){
	int array[5]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(array[0]);
	for (int i = 0; i < size; i++)
			{
				cout<<array[i]<<" ";
			}		
	rev(array);
	return 0;
}