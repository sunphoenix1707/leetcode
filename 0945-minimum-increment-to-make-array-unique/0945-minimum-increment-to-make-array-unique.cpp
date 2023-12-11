class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1] >= nums[i]) {
                int s=nums[i];
                nums[i]=nums[i-1]+1;
                ans+=nums[i]-s;
            }
        }
        return ans;
    }
};