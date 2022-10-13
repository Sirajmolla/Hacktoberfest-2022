#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
// You are given with an array an you have to print all its subsets
// Example 1:
//input [1,2,3]
//output [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

void solve(vector<int> nums,int i,vector<int> digit,vector<vector<int>>& ans){
        if(i>=nums.size()){
            ans.push_back(digit);
            return ;
        }
        //leave
        solve(nums,i+1,digit,ans);
        //accept
        digit.push_back(nums[i]);
        solve(nums,i+1,digit,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> digit;
        int index=0;
        solve(nums,index,digit,ans);
        return ans;
    }
int main(){
    
    vector<int> nums={1,2,3};
    vector<vector<int>> answer=subsets(nums);
   for (vector<int> it : answer)
    {
        for (int x : it)
        {
            cout << x << " ";
        }    
       cout<<endl;
    }
    
    return 0;
}