class Solution {
public:
    int rev(int a) {
        int ans=0;
        while(a) {
            ans=ans*10 + a%10;
            a/=10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto c:nums) {
            mp[c-rev(c)]++;
        }
        long ans=0, mod=1e9 + 7;
        for(auto i : mp)
            ans= (ans+ ((long)i.second * (long)(i.second-1))/2) % mod;
        return ans;
    }
};