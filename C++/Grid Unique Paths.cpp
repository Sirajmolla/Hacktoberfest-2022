#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	int num = (m+n-2);
	int den = max(m,n)-1;
	long long res = 1;
	for(int i=1;i<=den;i++){
		res *= num;
		res /= i;
		num--;
	}
	return res;
}