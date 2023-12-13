class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int l = 0,ans=0;
        long currsum=0,target=0;
       for(int r=0;r<n;r++) {
           currsum+=nums[r];
           target=nums[r];
           while((r-l+1)*target - currsum > k) {
               currsum-=nums[l];
               l++;
           }
           ans=max(ans,r-l+1);
       }
        return ans;
    }
};