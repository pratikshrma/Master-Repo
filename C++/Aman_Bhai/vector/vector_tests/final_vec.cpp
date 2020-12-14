#include <vector>
#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> arr[n];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           arr[i].push_back(i+j);
       }
   } 
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
       }cout<<endl;
   } 

   //DEKH BHAI AB ARRAY INSIDE ARRAY TO NI AAYA MERKO KARNA PAR YE HEI JITNA CLOSE JA
   //PIYA MEI YE HEI ARRAY OF VECTORYS MEANS ROWS ARE LIMITED IE ARRAY BUT THE COLUMNS ARE 
    //UNLIMITED IE VECTORS
   
   
   return 0;
}