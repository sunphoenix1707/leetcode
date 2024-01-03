class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int> ans;
        if(n%2) return {};
        sort(changed.begin() , changed.end());
       map<int,int> mp;
        for(auto c: changed) mp[c]++;
        for(auto &c: changed) {
            int t = c*2;
            if(mp[c] == 0) continue;
            if(mp.find(t) == mp.end() || mp[t]==0) return {};
            ans.push_back(c);
            mp[c]--;
            mp[t]--;
        }
        return ans;
    }
};