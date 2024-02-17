class Solution {
public:
   int maximumJumps(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> dp(n + 1, -1);
    dp[0]=0;
    for (int i = 1; i < n; i++) {
        int ans = -1e9;
       
        for (int j = 0; j < i; j++) {
             if(dp[j]==-1)  continue;
            if (abs(nums[j] - nums[i]) <= target) {
                ans = max(ans, dp[j] + 1);
            }
        }

        dp[i] = max(dp[i], ans);
        cout<<dp[i];
    }

    return dp[n-1];
}

};