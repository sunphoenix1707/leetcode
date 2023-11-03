class Solution {
public:
    int findMinimumTime(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),[&](vector<int> &v1,vector<int>&v2) {
           if(v1[1]<v2[1]) return true;
            return false;
        });
        int ans=0;
        vector<bool>used (2001,false);
        for(auto &t:tasks) {
            for(int i=t[0];i<=t[1];i++) if(used[i]) t[2]--;
            for(int i=t[1];t[2]>0;i--) {
                if(!used[i]) {
                used[i]=true;
                    t[2]--;
                    ans++;
                }
            }
        }
        return ans;
    }
};