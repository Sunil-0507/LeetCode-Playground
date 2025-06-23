class Solution {
public:
    string toBaseK(long long num, int k) {
        string res;
        while (num > 0) {
            res += char('0' + (num % k));
            num /= k;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    bool isPalindrome(const string& s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }
    long long createPalindrome(long long half, bool odd) {
        string s = to_string(half);
        string rev = s;
        if (odd) rev.pop_back(); 
        reverse(rev.begin(), rev.end());
        return stoll(s + rev);
    }

    long long kMirror(int k, int n) {
        long long res = 0;
        int count = 0;
        int len = 1;
        while (count < n) {
            for (int i = pow(10, len - 1); i < pow(10, len) && count < n; ++i) {
                long long num = createPalindrome(i, true);
                if (isPalindrome(toBaseK(num, k))) {
                    res += num;
                    count++;
                }
            }
            for (int i = pow(10, len - 1); i < pow(10, len) && count < n; ++i) {
                long long num = createPalindrome(i, false);
                if (isPalindrome(toBaseK(num, k))) {
                    res += num;
                    count++;
                }
            }
            len++;
        }
        return res;
    }
};
