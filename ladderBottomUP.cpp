#include<bits/stdc++.h>
using namespace std;
// other ladderbottomUP complexities are O(nk)
// this code has O(n)
int ladder_bottomUp(int n,int k,int *dp){
   dp[1]=dp[0]=1;//start case
   for(int i=2;i<=k;i++){
       dp[i]=2*dp[i-1];
   }
   for(int i=k+1;i<=n;i++){
       dp[i]=2*dp[i-1] - dp[i-k-1];
   }
   //print
   for(int j=1;j<=n;j++){
       cout<<dp[j]<<" ";
   }
   cout<<endl;
   return dp[n];
}
 
int main(){
    int n,k;
    int dp[100]={0};
    cin>>n>>k;
    cout<<"ways : "<<ladder_bottomUp(n,k,dp);
 
}
