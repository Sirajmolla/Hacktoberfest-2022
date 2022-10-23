#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,s1,s2,s3; //ab,bc,ac
cin>>a>>b>>c;
s1=sqrt(a*c/b);
s2=a/s1;
s3=b/s2;
cout<<(4*(s1+s2+s3));   
 return 0;
}