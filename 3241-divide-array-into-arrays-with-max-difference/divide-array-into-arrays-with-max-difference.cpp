class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        int n = nums.size();
        for (int i = 0; i < n; i += 3) {
            // Get the next 3 elements
            int a = nums[i], b = nums[i+1], c = nums[i+2];
            // Check if max difference in this triplet is within k
            if (c - a > k) return {};
            result.push_back({a, b, c});
        }
        return result;
    }
};
