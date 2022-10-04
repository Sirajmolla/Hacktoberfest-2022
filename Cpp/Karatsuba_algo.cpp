#include <bits/stdc++.h>
using namespace std;
#define ll long long int

long long numlen(long t)
{
    ll count=0;
    while(t>0)
    {
        t=t/10;
        count++;
    }
    return count;
}

long long int power(int a,int n){
       long long res=1;
    for(int i  = 1; i <= n; i++){
        res=res*a;
    }
    return res;
}

long long karatsuba(long x,long y)
{
    long long p,n,n1,size;
    long long x1,x2,y1,y2,u,v,w,z;
    n=numlen(x);
    n1=numlen(y);
    size=max(n,n1);
    if(x<10 && y<10)
    {
     p=x*y;
    }
   
    else
    {      
        x1=x/(int(power(10,int(ceil(size/2))))) ;
        x2=x-(x1*(power(10,int(ceil(size/2)))));
        y1=y/(int(power(10,int(ceil(size/2)))));
        y2=y-y1*(power(10,int(ceil(size/2))));
        u=karatsuba(x1,y1);
        v=karatsuba(x2,y2);
        w=karatsuba((x1-x2),(y1-y2));
        z=u+v-w;
        if(n%2==0)
        p=int(power(10,size))*u+int(power(10,((size/2))))*z+v;
        else
        p=int(power(10,size-1))*u+int(power(10,((size/2))))*z+v;
    }
    return p;
}

int main()
{
    ll num1,num2;
    cout<<"Enter number 1 :-";
    cin>>num1;
    cout<<"Enter number 2 :-";
    cin>>num2;
   cout<<"The multiplication of "<<num1<<" and "<<num2<<" is "<< karatsuba(num1,num2)<<endl;

}