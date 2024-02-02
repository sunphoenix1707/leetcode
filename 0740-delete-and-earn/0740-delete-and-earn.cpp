class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
       int dp[10002] = {0};
        int freq[10002] = {0};
        for(int e:nums) {
            freq[e]++;
        }
        dp[10000] = 10000*freq[10000];
        for(int i=9999;i>=0 ;i--)
        {
            dp[i]=max(i*freq[i]+dp[i+2],dp[i+1]);
        }
        return dp[0];
    }
};