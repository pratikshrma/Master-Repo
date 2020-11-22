#include <iostream>
using namespace std;

int getBit(int n,int pos){
    return (n&(1<<pos))!=0;
}

int setBit(int n,int pos){
    return(n|(1<<pos));
}

int clearBit(int n,int pos){
    return ((~(1<<pos))&n);

}

int updateBit(int n,int pos){
    return ((1<<pos)|n);
}
    
int main(){

    // now first is get bit to isme hame btna hei ki konsa position pe konsa bit hei
    /*
        n=5=0101
position->  3210

        ab hamko cahia ki position 2 pe konsa bit hei
        to 1<<i=0100 

        to one ka bit hota hei 0000 0001 to agar ham isko left shift kar dega i se jo ki 2 hei to final ans aai ga 0000 0100  

        iska bad ham 0101 & 0100 karage jiska nas 0100 aai ha ye isliye ki agar  hamare pas agar resulting mei agar kahi par bhi  one aaya to uska matlab hamare pas 
        one hei us index pe or agar 0 aaya to matlab hamare pas 0 hei us index pe cool cool!! agar zero aaya to vaha pe vo bit nahi hei or agar zero ki jagha kuch bhi hei 
        to matlab vaha pe vo bit hei
        
    */
          cout<<getBit(5,2)<<endl;

   /*
    AB AGLA HEI SET BIT 
    iska simple matlab hei ki hamko kisi position pe one lagana hei agar vaha pe one ni hei to 

    jse last que mei hamne & kia the is bar ham or karage
   */
  cout<<setBit(5,1)<<endl;  //cool  cool cool iska ans 7 aaya ie 0111   

  cout<<clearBit(5,2)<<endl;
  /*
    to clear bit ka ye scene hei ki ham pehle to jo bit clear karna ho utni jagha tak 1<<(no)  kar dega lets say no 2 hei to 0100 ab ham isko ~ flip kar dega
    fir ans ho jai ga 1011 fir final step mei ham (1<<(no))&i kar dega boom ans aa gaya

    noice ho gaya
  */
  cout<<updateBit(5,1)<<endl;
    /*
        to update bit ka bhi clear bit  jse hi scene hei ko jse kahi one nahi hei to vaha one lana hei
        or ismme given bhi hota hie ki yaha pe karna konsa hei

        and it is nothing but first clear bit and then set bit  bas itna hi hei cool cool cool!!
    */
    return 0;
}