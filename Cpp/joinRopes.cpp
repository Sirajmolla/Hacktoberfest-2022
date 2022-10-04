#include <iostream>
#include<vector>
#include<queue>
using namespace std;
 
int join_ropes_cost(int* arr,int n){
    priority_queue<int, vector<int> , greater<int>> pq(arr,arr+n);
    int cost=0;
    while(pq.size()>1){
        int first=pq.top(); // we pop the least size rope
        pq.pop();
        int second=pq.top();  // we pop the second least size rope
        pq.pop();
        // we sum both & then we push inside the heap
        int sum= first+second;
        cost+=sum;
        pq.push(sum);
    }
    return  cost;
}
 
int main() {
    int n;
    cin>>n;
    int* arr=new int[n]();
    int temp;
    for( int i=0;i<n;i++){
        cin>>temp;
        arr[i]=temp;
    }
    cout<<join_ropes_cost(arr,n);
    return 0;
 
}
 
