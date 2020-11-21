/*
so what is recursion defination
    so it is when a function call itself

    jse agar hamko sum nialna hei n tak to ham usko pehle to loop mei add kar sakte hei jse 
    sum=n+ n-1 + n-2 .....+ 1;
    ya to ham esa kuch bhi kar sakte hie 

    sum= n+ sum(n-1);
*/

#include <iostream>
using namespace std;

int recursive_Sum(int n){
   if(n==0){
       return 0;
   }
   int prevSum=recursive_Sum(n-1);
   return n+prevSum;
}

int main(){

    int n;
    cout<<"Enter something "<<endl;
    cin>>n;

    cout<<recursive_Sum(n)<<endl;

    return 0;
}