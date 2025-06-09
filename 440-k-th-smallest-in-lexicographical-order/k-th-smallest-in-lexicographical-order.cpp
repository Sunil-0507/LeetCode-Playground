class Solution {
public:
    int findKthNumber(int n, int k) {
        int curr = 1;
        k--; 

        while (k > 0) {
            int steps = countSteps(curr, n);
            if (steps <= k) {
                
                curr++;
                k -= steps;
            } else {
               
                curr *= 10;
                k--;
            }
        }

        return curr;
    }

private:
    int countSteps(long long curr, long long n) {
        long long steps = 0;
        long long first = curr;
        long long last = curr + 1;
        while (first <= n) {
            steps += min(n + 1LL, last) - first;
            first *= 10;
            last *= 10;
        }
        return steps;
    }
};
