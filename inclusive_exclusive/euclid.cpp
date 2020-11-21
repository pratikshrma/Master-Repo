// to euclid hota hie gcd nikalne ke liye use hota hei jisko HCf bhi bolte hei
/*
    24=2*2*2*3
    42=2*3*7  
    to iska hcf  = 2*3 hoga ie 6

    to ab euclid

    42-24=18;   agar in dono ko - karte hie to inka gcd ko frk ni pdta 
    24-18=6; 
    18-6=12;
    12-6=6;
    6-6=0;

    to jis point pe zero hua us point pe void hoga hamara gcd

    ab isko better way mei bhi kar sakte hei jse ki ham inko - karne ki jagha ham inka remainder nikale
    n1 n2
    42%24=18;
    24%18=6;
    18%6=0;

    jaha pe zero hua to vohi gcd hoga

*/

#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int final;
    while(1){
        final=n1%n2;
        n1=n2;
        n2=final;
        
        if(final==0){
            break;
        }
    }
    cout<<n1<<endl;
   

    return 0;
}