#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<vector<int>> v2d;   
    
    typedef vector<vector<int> > IntMatrix;
    IntMatrix m;

    vector<int> v2(5,99);//ye v2 matrix hei 5 ka or isme 99 bhare hei
    vector<vector<int>> v2d2(3,v2); //vector ka size 3 hei or har ek mei ek or matrix hei cool!!

    for(int i=0;i<v2d2.size();i++){
        for(int j=0;j<v2d2[i].size();j++){
            cout<<v2d2[i][j]<<" ";
        }cout<<endl;
    }



    return 0;
}