class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
      vector<int> ans(n,0);
        vector<long long> times(n,0);
        sort(meetings.begin(),meetings.end());
        for(int i=0; i<meetings.size();i++) {
            bool flag=false;
            long long val = 1e18;
            int minidx=-1;
             int start=meetings[i][0];
                int end=meetings[i][1];
            for(int j=0; j<n ;j++) {
               
                if(times[j] < val) {
                    val=times[j];
                    minidx=j;
                }
                if(times[j] <= start) {
                    flag=true;
                    ans[j]++;
                    times[j]=end;
                    break;
                }
            }
            if(!flag) {
                ans[minidx]++;
                times[minidx]+= (1ll * (end-start));
            }
        }
        int maxi=-1, idx=-1;
        for(int i=0;i<n;i++) {
            if(ans[i]>maxi) {
                maxi=ans[i];
                idx=i;
            }
        }
        return idx;
    }
};