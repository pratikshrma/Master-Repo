// ok ok par isko karne se pehle iska diagram ko yad rakhi vo mil jai ga aman bhai ki vid lecture mei 16.3
// vse ans to kafi sahi hei

#include <iostream>
using namespace std;

void subseq(string s,string ans=""){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }   
    
    char ch=s[0];
    string ros=s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
}

int main(){
   subseq("ABC");
   
   return 0;
}