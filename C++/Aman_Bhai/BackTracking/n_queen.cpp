/*
n*n chess board with n queens such that no queens shoud attack each 
other in all possible directions

0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0

(one is queen and 0 is empty space)
{
	they all should be in a diff rows / coulums/ diagonals other 
	wise they can attack each other
}

to ham input dega dega n or usse pehle to hamko pehle n*n ka aray banana hei or uske 
bad usme queen bhi place karni hei
 4 ka output ye hoga

0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0

*/


#include <iostream>
using namespace std;
bool isSafe(int** arr,int x,int y,int n){
    for(int row=0;row<x;row++){ //ye hei column check karne ke liye I THINK ham row 1 -> row 2 check karage fir hi to column check hoge
        if(arr[row][y]==1){
            return false;
        }
    }
    //ab check karna hei apne diagonal ke liye
    //isme hamko 2 iterotor cahia kyuki isme hamara row as well as 
    //hamare columns dono change ho rahe hoga or hamko 2 diagonal bhi to chek karne hei
    int row=x;
    int col=y;
    //ye hei left diagonal ke liye
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    //ye hei hamare 
    row=x;
    col=y;
        while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int **arr,int x,int n){ //yaha pe hamko y ki zarurat ni padagi kyuki hamkoo age vali pos se koi lena dena ni hei
    if(x>=n){ //matlab hamne apni n queens place kar di hei
        return true;
    }

    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){//yaha pe y ki jagha col jai ga
            arr[x][col]=1;
            if(nQueen(arr,x+1,n)){
                return true;
            }
            arr[x][col]=0;
        }
    }
    return false;   
}

int main(){
    int n;
    cin>>n;
    int ** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }

    if(nQueen(arr,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}