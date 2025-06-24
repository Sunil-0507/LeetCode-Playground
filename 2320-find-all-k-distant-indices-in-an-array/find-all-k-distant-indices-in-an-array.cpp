class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> result;
        vector<bool> isKDistant(n, false); 

        for (int j = 0; j < n; ++j) {
            if (nums[j] == key) {
                int start = max(0, j - k);
                int end = min(n - 1, j + k);
                for (int i = start; i <= end; ++i) {
                    isKDistant[i] = true;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            if (isKDistant[i]) {
                result.push_back(i);
            }
        }
        return result;
    }
};
