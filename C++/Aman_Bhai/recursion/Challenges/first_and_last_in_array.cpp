//FInd the first and last occurance of a number in an array;


#include <iostream>
using namespace std;
int first(int arr[],int n,int i,int key){
	  if(arr[i]=key){
	  	return i;
	  }
	  if(i==n){
	  	return -1;
	  }
	  return first(arr,n,i+1,key);
}
int last(int arr[],int n,int i,int key){
	return first(arr,n,i+1,key);	
	if(arr[i]=key){
	  	return i;
	}
	if(i==n){
	 	return -1;
	}
}

int main(){
	int n=10;
	int arr[n]={2,1,4,5,6,7,8,1,9,10};
	int f=1;//this is the var that we need to find
	cout<<first(arr,n,0,f)<<endl;
	//cout<<last(arr,n,0,f)<<endl;


	return 0;
}