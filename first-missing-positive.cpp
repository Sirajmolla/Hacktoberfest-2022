// Given an unsorted integer array nums, return the smallest missing positive integer.
// You must implement an algorithm that runs in O(n) time and uses constant extra space.

class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n=arr.size();
        if(n==0){
            return 1;
        }
        sort(arr.begin(), arr.end());
        int index=0;
        while(index<n && arr[index]<=0){
            index++;
        }
        int count=1;
        for(int i=index;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]){
               continue; 
            }
            if(arr[i]!=count){
                break;
            }
            count++;
        }
        return count;
    }
};
