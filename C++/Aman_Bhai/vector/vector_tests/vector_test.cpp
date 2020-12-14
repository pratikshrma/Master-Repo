#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> hello;
    // for(int i=0;i<100;i++){
    //     hello.push_back(i);
    // }
    // for(int i=0;i<100;i++){
    //     cout<<hello[i]<<endl;
    // }
    //   so this is a 1d martix kinda. Now lets try a 2d matrix

    vector<vector<int>> hello;
    cout<<"vector was made"<<endl;
    //hint hello[i].push_back;
    for(int i=1;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<"1st loop"<<endl;
            hello[i].push_back(0);
        }
    }
    cout<<"Input done!!"<<endl;
    //now lets print it:

    for(int i=0;i<hello.size();i++){
        for(int j=0;j<hello[i].size();j++){
            cout<<hello[i][j]<<" ";
        }cout<<endl;

    }


//     std::vector<vector<int>> d; 
//     //std::vector<int> d;
//     int in;
//     int temp;
//     cout<<"Enter the N number of ship and port:"<<endl;
//     cin>>in;
//     cout<<"\Enter preference etc..:\n";
//     for(int i=0; i<in; i++){ 
//         cout<<"ship"<<i+1<<":"<<' ';
//     for(int j=0; j<in; j++){
//         cin>>temp;
//         d[i].push_back(temp); 
//     }
// }
    return 0;
}