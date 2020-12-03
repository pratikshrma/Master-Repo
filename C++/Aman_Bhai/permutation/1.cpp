/*
Given an array nums of distinct integers return all the possible
permutation. You can return the answer in any order.

sample test case:
input 1,2,3
output ie[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

is problem ko 3 ways mei solve kar sakte hei 
1>Recursion
2>Loops
3>Inbuild Functions


1>idea you are at index ids  try out all the possible swap Ensuring you don't produce duplicate.
*/ 



#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> &a,int idx=0){
    if(idx==a.size()){
        ans.push_back(a);
        return ;
    }
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){
       cin>>i;
    }
    // permute(a,0);    so instead of doing this we could just use an stl lib to accomplish the same purpose

    //+++++++++++++++++++++++++++++++ THE NEW SOLUTION
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));

    //+++++++++++++++++++++++++++++++
    for(auto v: ans){
        for(auto i : v){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

   return 0;
}