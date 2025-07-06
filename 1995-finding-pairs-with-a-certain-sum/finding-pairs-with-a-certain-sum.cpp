

class FindSumPairs {
    vector<int> nums1, nums2;
    unordered_map<int, int> freqMap;

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        for (int num : nums2) {
            freqMap[num]++;
        }
    }

    void add(int index, int val) {
        int oldVal = nums2[index];
        freqMap[oldVal]--;
        nums2[index] += val;
        freqMap[nums2[index]]++;
    }

    int count(int tot) {
        int res = 0;
        for (int a : nums1) {
            int b = tot - a;
            if (freqMap.count(b)) {
                res += freqMap[b];
            }
        }
        return res;
    }
};


/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */