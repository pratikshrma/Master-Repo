/*
Given a collection of numbers, nums that might contain duplicates return all possible unique
permutation in any order.

IDEA = while swapping avoid duplicates
*/
#include "bits/stdc++.h"
using namespace std;
void solve(vector<int> nums, vector<vector<int>> &ans, int idx) {
    if (idx == nums.size()) {
        ans.push_back(nums);
        return ;
    }
    for (int i = idx; i < nums.size(); i++) {
        if(i != idx and nums[i]==nums[idx])
        continue;
         swap(nums[i], nums[idx]);
         solve(nums, ans, idx + 1);
    }
}
vector<vector<int>> permute(vector<int> nums) {
vector<vector<int>> ans;
sort(nums.begin(), nums.end());
solve(nums,ans,0);
return ans;
}

int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }    
    vector<vector<int>> res= permute(a);
    for(auto v: res){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

