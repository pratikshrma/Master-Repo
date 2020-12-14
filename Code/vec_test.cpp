#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<vector<int>> v2d;   

    // vector<int> v2(5,99);//ye v2 matrix hei 5 ka or isme 99 bhare hei
    // vector<vector<int>> v2d2(3,v2); //vector ka size 3 hei or har ek mei ek or matrix hei cool!!

    // for(int i=0;i<v2d2.size();i++){
    //     for(int j=0;j<v2d2[i].size();j++){
    //         cout<<v2d2[i][j]<<" ";
    //     }cout<<endl;
    // }


    //PAR MAIN GOAL YE NI HEI NA MAIN GOAL TO PROPER INPUT CAHIA OR USKO FIR BHAJNA BHI HEI KISI FUNCITON MEI 
   int n;
   cin>>n;
   vector<int> v[n]; //par yaha pe ki kya hei hamne LOL!
    //int temp;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        //cin>>temp;
           v[i].push_back(i+j);
       }
   }
   cout<<"DOne"<<endl;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cout<<v[i][j]<<" ";
       }cout<<endl;
   }


    return 0;
}