class Solution {
public:
    int fib(int n) {
        // if(n<=1) return n;
        // int prev2=0;
        // int prev1=1,curr;
        // for(int i=2;i<=n;i++){
        //    curr=prev2+prev1;
        //    prev2=prev1;
        //    prev1=curr;
        // }
        // return prev1;
        if(n<=1)
        return n;
        return fib(n-1)+fib(n-2);
    }
};