class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        unordered_map<int,int>mp;
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++) {
            for(int j=0 ; j<nums[i].size() ;j++)
            
                v.push_back({nums[i][j],i});
            
        }
        sort(v.begin(),v.end());
        int i=0, j=0;
        vector<int> ans{-100000, 100000};
        while(j < v.size()) {
            mp[v[j].second]++;
            while(mp.size()==nums.size()) {
            if(v[j].first - v[i].first < ans[1]-ans[0]) ans={v[i].first, v[j].first};
            mp[v[i].second]--;
                if(!mp[v[i].second])  mp.erase(v[i].second);
                  i++;
                }
            j++;
        }
        return ans;
    }
};