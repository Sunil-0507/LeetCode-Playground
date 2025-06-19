class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 1;  // At least one subsequence needed
        int start = nums[0];  // Start of the current subsequence
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] - start > k) {
                // Start a new subsequence
                count++;
                start = nums[i];
            }
        }
        return count;
    }
};
