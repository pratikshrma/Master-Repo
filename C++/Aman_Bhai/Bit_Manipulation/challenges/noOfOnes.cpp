#include <math.h>
#include<iostream>
using namespace std;
    //  ab ye logic kse chala hmm bad mei karta isko figure out
int NoOfOne(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<NoOfOne(n)<<endl;


    return 0;
}