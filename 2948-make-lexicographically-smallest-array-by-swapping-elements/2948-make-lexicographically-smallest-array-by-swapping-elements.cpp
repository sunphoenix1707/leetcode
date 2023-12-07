class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++)
            v.push_back({nums[i],i});
         sort(v.begin(),v.end(),[](const auto &x, const auto &y) {
             return x.first < y.first;
         });
        vector<vector<pair<int,int>>>c = {{v[0]}};
        for(int i=1;i<nums.size();i++) {
            if(v[i].first-v[i-1].first <= limit)
                c.back().push_back(v[i]);
                else c.push_back({v[i]});
        }
        for(auto &k:c) {
            vector<int> ind;
            for(auto &s: k) 
                ind.push_back(s.second);
            sort(ind.begin(),ind.end());
            for(int i=0;i<ind.size();i++)
                nums[ind[i]]=k[i].first;
        }
        return nums;
    }
};