class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mi=p[0];
        int profit=0;
        for(int i=1;i<p.size();i++){
            int diff=p[i]-mi;
            profit=max(profit,diff);
            mi=min(mi,p[i]);
        }
        return profit;
    }
};