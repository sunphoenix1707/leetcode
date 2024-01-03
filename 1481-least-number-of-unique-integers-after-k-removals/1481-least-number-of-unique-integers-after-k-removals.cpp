class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto c: arr) mp[c]++;
        multimap<int,int>mm;
        for(auto it : mp) {
            mm.insert({it.second , it.first});
        }
        int ans = 0;
        for(auto it = mm.begin() ; it!=mm.end() ;it++)
        {
            k-=it->first;
            if(k<0) return mm.size()-ans;
            ans++;
        }
        return 0;
    }
};