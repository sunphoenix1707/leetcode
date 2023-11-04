class Solution {
public:
    static bool compare(vector<int> &v1,vector<int>&v2) {
        return (v1[0]-v1[1] < v2[0]-v2[1]);
    }
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<vector<int>> bags;
        int n=rocks.size();
           int ans=0;
        for(int i=0;i<n;i++) {
          bags.push_back({capacity[i],rocks[i]});
        }
            sort(bags.begin(),bags.end(),compare);
         
            for(auto &it:bags) {
                if(it[0]-it[1]<=additionalRocks)  additionalRocks-=(it[0]-it[1]);
                else break;
                ans++;
            }
        
        return ans;
    }
};