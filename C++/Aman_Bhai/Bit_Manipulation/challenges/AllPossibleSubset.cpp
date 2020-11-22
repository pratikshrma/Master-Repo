/*
intresting questioin hei jse ki hamar pas ek set hei {a,b,c}
to ham isko esa likh sakte hie
ab isko bit mei kse represent kse karna
{}          000-0
{c}         001-1
{b}         010-2
{bc}        011-3
{a}         100-4
{ac}        101-5
{ab}        110-6
{abc}       111-7
*/

#include <iostream>
using namespace std;

void SubSet(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}

int main(){
    int arr[4]={1,2,3,4};
    SubSet(arr,4);
    return 0;
}