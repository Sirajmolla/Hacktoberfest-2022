#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	if(n == 0) return 1%m;
	if(n == 1) return x % m;
	if(n%2 == 0){
		long long val = modularExponentiation(x,n/2,m)%m;
		return ((val%m)*(val%m))%m;
	}
	else{
		long long val = modularExponentiation(x,n-1,m)%m;
		return ((x%m)*(val%m))%m;
	}
}

#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	long long res = 1;
	while(n > 0){
		if(n & 1){
			res = (res * x)%m;
		}
		x = (1ll*(x%m)*(x%m))%m;
		n /= 2;
	}
	return res;
}