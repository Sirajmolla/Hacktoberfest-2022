#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
	int i = 0;
	int j = n-1;
	while(i<m and j>=0){
		if(mat[i][j] == target) return true;
		if(mat[i][j] < target) i++;
		else j--;
	}
	return false;
}