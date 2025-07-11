class Solution {
public:
    int sos(int n){
        int sum=0;
        while(n>0){
            int x=n%10;
            sum+=x*x;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=sos(n);
        while(fast!=1 && fast!=slow){
            slow=sos(slow);
            fast=sos(sos(fast));
        }
        return fast==1;
        
    }
};