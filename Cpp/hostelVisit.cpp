// hostel visit
 
/*
Dean of MAIT is going to visit Hostels of MAIT.
As you know that he is a very busy person so he 
decided to visit only first "K" nearest Hostels. 
Hostels are situated in 2D plane. You are given 
the coordinates of hostels and you have to answer
the Rocket distance of Kth nearest hostel from origin ( Dean's place ) .
Input Format
 
First line of input contains Q Total no. 
of queries and K There are two types of queries:
 
first type : 1 x y For query of 1st type, 
you came to know about the co-ordinates ( x , y ) 
of newly constructed hostel.
second type : 2 For query of 2nd type, you have to
output the Rocket distance of Kth nearest hostel till now.
 
The Dean will always stay at his place ( origin ).
It is gauranted that there will be atleast k queries
of type 1 before first query of type 2.
 
Rocket distance between two points ( x2 , y2 ) and 
( x1 , y1 ) is defined as (x2 - x1)2 + (y2 - y1)2
 
*/
 
 
#include <iostream>
#include<queue>
using namespace std;
int main() {
    long long int n,k;
    cin>>n>>k;
    priority_queue<long long int,vector<long long int>> pq;
    long long int i,d,op,x,y,element; //op=option x,y= coordinates d=distance
    for(i=0;i<k;i++){
        cin>>op>>x>>y;
        d=(x*x)+(y*y);
        pq.push(d);
    }
    for(;i<n;i++){
        cin>>op;
 
        if(op==1){
            cin>>x>>y;
            d=(x*x)+(y*y);
            if(d<pq.top()){
                pq.pop();
                pq.push(d);
            }
        }
        if(op==2){
 
            cout<<pq.top()<<endl;
        }
    }
}
