#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// you habe given two integers num1 and num2 you have to return the ans num1 raise to the power num2
//exmaple:
// num1=2,num2=2
//output 4

int power(int n,int i){
    if(i==0){
        return 1;
    }
    if(i==1){
        return n;
    }
    int ans=power(n,i/2);
    if(i%2==0){
        return ans*ans;
    }
    else{
        return n*ans*ans;
    }
}

int main(){
    int n,i;
    cout<<"enter the number and its power";
    cin>>n>>i;
    int output=power(n,i);
    cout<<"Output is "<<output;
    return 0;

}