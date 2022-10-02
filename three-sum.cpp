// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

vector<vector<int> > threeSum(vector<int> &arr) {
    
    vector<vector<int> > res;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        
        int target = -arr[i];
        int left = i + 1;
        int right = arr.size() - 1;

        while (left < right) {

            int sum = arr[left] + arr[right];
            
            // Finding answer which start from number arr[i]
            if (sum < target)
                left++;

            else if (sum > target)
                right--;

            else {
                vector<int> triplet = {arr[i], arr[left], arr[right]};
                res.push_back(triplet);
                
                // Processing duplicates of 2nd number
                // Rolling the left pointer to the next different number forwards
                while (left < right && arr[left] == triplet[1]) left++;

                // Processing duplicates of 3rd number
                // Rolling the right pointer to the next different number backwards
                while (left < right && arr[right] == triplet[2]) right--;
            }
            
        }

        // Processing duplicates of 1st number
        while (i + 1 < arr.size() && arr[i + 1] == arr[i]) 
            i++;

    }
    
    return res;
    
}
