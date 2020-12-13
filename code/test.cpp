//so lets see what is going on with this nqueen 

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=10*i+j;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    cout<<arr[1][1]<<endl;
    cout<<arr[2][1]<<endl;
    
    
    return 0;
}