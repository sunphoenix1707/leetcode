class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++) {
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
            if(maxi-mini>k) {
                ans++;
                maxi=nums[i];
                mini=nums[i];
            }
        }
         if(maxi-mini<=k) {
                ans++;
            }
        return ans;
    }
};