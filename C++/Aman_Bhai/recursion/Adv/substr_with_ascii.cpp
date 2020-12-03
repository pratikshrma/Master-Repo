/*
to ye bhi last que jse hei hei last que mei ham ek par add kar rahe the or ek bar nahi add kar rahe the ham is bar 3 bar add karage 
1st time ham isko add nahi karage
2nd time ham ek add karage 
3rd time ham iski ascci add karage


isko na ek bar paper pe bhi kar ke dekh hi lei varna yad ni rehne vala ye
*/
#include <string>
#include <iostream>
using namespace std;

void subseq(string str,string ans="")
{
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    string ros=str.substr(1);
    int code =ch;



    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(code));
}
int main(){
    subseq("AB");

    return 0;
}