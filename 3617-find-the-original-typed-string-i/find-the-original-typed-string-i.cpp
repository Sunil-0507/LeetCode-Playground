class Solution {
public:
    int possibleStringCount(string word) {
        long long ans = 1;                
        for (size_t i = 0; i < word.size(); ) {
            size_t j = i;
            while (j < word.size() && word[j] == word[i]) ++j; 
            ans += (j - i - 1);            
            i = j;
        }
        return static_cast<int>(ans);       
    }
};