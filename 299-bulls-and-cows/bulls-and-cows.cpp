class Solution {
public:
    string getHint(string s, string g) {
        int n=s.size();
        int ct=0;
        int a[10]={0};
        int b[10]={0};
        for(int i=0;i<n;i++){
            if(s[i]==g[i])
            ct++;
            else{
                a[s[i]-'0']++;
                b[g[i]-'0']++;
            }

        }
        int bulls=0;
        for(int i=0;i<10;i++){
            bulls+=min(a[i],b[i]);
        }
        return to_string(ct)+'A'+to_string(bulls)+'B';


    }
};