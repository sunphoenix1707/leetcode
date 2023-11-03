class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxtypes, int truckSize) {
        sort(boxtypes.begin(),boxtypes.end(),[&](vector<int> &v1,vector<int> &v2){
            if(v1[1]>v2[1]) return true;
            return false;
        });
        int a=truckSize;
        int ans=0;
        for(auto &t:boxtypes) {
             if(a==0) break;
            int val=t[0];
            if(a<val) {
                val=a;
            }
            a=abs(a-val);
        
            ans+=val*t[1];
         
        }
        return ans;
    }
};