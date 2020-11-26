// check if an array is sorted or not

#include <iostream>
using namespace std;

bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restArray=sorted(arr+1,n-1);  //yaha pe arr+1 karne ka matlab ye hua ki jse ki pehle arr ka initial pointer
    									// 0 pe hei to ab vo 1 pe ho jai ga
    return (arr[0]<arr[1] && restArray);
}   

int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<sorted(arr,6);

    return 0;
}