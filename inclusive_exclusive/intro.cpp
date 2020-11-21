#include <iostream>
using namespace std;
int main(){
        // to ye kam aata hei jab niklna ho ki no of ways to do something
        // to lets say question hei ki how many number bw 1 to 1000 are divisible by 5 and 7?
        int count5=0;
        int count7=0;
        int count57=0;
        for(int i=0;i<40;i++){
            if(i%5==0){
                count5++;
            }
            if(i%7==0){
                count7++;
            }
            if(i%7==0 && i&5==0){
                count57++;
            }
        }
        int total=(count5+count7)-count57;
        cout<<total<<endl;

    return 0;
}