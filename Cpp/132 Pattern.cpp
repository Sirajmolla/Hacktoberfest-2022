class Solution {
public:
    bool find132pattern(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n);
        dp[0] = arr[0];
        for(int i=1;i<n;i++){
            dp[i] = min(dp[i-1],arr[i]);
        }
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top() <= dp[i]) st.pop();
            if(!st.empty() and st.top() < arr[i]) return true;
            st.push(arr[i]);
        }
        return false;
    }
};