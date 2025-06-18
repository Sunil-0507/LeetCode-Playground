class Solution {
    bool can_we_place(vector<int>&a,int dis,int m){
        int count_balls=1;
        int last=a[0];
        int n=a.size();
        for(int i=1;i<n;i++){
            if(abs(a[i]-last)>=dis){
                last=a[i];
                count_balls++;
            }
            if(count_balls>=m)
            return true;
        }
        return false;
    }
public:
    int maxDistance(vector<int>&a, int m) {
        sort(a.begin(),a.end());
        int n=a.size();
        int low=1;
        int high=a[n-1]-a[0];
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(can_we_place(a,mid,m)==true){
            ans=mid;
            low=mid+1;}
            else
            high=mid-1;
        }
        return ans;

    }
};