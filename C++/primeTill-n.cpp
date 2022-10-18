
//  to print all prime number till n in O(nlogn)
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v(n,0);
    
    for(int i=2;i<=n;i++){
    	if(v[i]==1)continue;
    	for(int j=2*i;j<=n;j+=i){
    		v[j]=1;
    	}
    }
    for(int i=2;i<=n;i++){
    	if(v[i]==0)cout<<i<<" ";
    }

}
// intput: 38
// output: 2 3 5 7 11 13 17 19 23 29 31 37 
