class Solution {
public:
    vector<int> partitionLabels(string s) {
       unordered_map<int,int>mp;
        for(int i=0;i<s.size();i++) {
            mp[s[i]]=i;
        }
        vector<int> ans;
        int prev=-1,maxi=0;
        for(int i=0;i<s.size();i++)
        {
            maxi=max(maxi,mp[s[i]]);
            if(i==maxi) {
                ans.push_back(maxi-prev);
                prev=maxi;
            }
        }
        return ans;
    }
};