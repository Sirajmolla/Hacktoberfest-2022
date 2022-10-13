#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
// You are given with a string an you have to print all its subsequnces expect the empty one
// Example 1:
//input "abc"
//output a ab abc ac b bc c

void solve(string s,int i,string digit,vector<string>& ans)
{
        if(i>=s.length()){
            if(digit!="")
            ans.push_back(digit);
            return ;
        }
        //leave
        solve(s,i+1,digit,ans);
        //accept
        
        digit.push_back(s[i]);
        solve(s,i+1,digit,ans);
}
	
vector<string> AllPossibleStrings(string s)
{
		    // Code here
		vector<string> ans;
        string digit="";
        int index=0;
        solve(s,index,digit,ans);
        sort(ans.begin(),ans.end());
        return ans;
}
int main(){
    
    string name="abc";
    vector<string> answer=AllPossibleStrings(name);
   for (auto it : answer)
    {
        for (auto x : it)
        {
            cout << x << " ";
        }    
       cout<<endl;
    }
    
    return 0;
}