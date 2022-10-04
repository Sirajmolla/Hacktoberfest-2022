#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        size_t i = 0, j = i + 1;
        for(; j < nums.size(); ++j) 
        {
            if(nums[i] == nums[j]) 
            {
                continue;
            }
            nums[++i] = nums[j];
        }
        return nums.size() - (j - i - 1);
    }
};
