/*  
If a number is a multiple of 2 then it follows a  specific pattern ie 10 - 100 - 1000 - 10000
                                                                        2 - 4  -   8  -   16

 thk hei iska ek to hei simple solution ki 2 se divide karte ja end mei agar 1 aaya to 2 ka multiple hei
 par isko bit manipulation kse karna
 
*/                                      

#include <iostream>
#include <math.h>
using namespace std;

void My_checkPower(int n){
    // ok ok second idea
    int pos=log2(n);
    int check=((1<<pos)&n);
    cout<<check<<endl;
    
    if(check==n){
        cout<<"It is the one "<<endl;
    }
    else{
        cout<<"it is not the one bro";
    }
}
//to agar 8 hei to uski binary 1000 hogi or guess what 7 ki binary 111 and if you and them it will result in 0
//and that 0 it just for the exception bc in the case of 0 you cannot do 0-1 so if the n is 0 it will result in whole thing 
//being 0 boom!! 
bool Maam_checkPower(int n){
    return (n && !(n&n-1));
}

int main(){
    int n;
    cin>>n;
    cout<<Maam_checkPower(n)<<endl;
    

    return 0;
}