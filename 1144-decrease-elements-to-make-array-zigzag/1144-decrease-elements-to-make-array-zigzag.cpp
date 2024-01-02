class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int a=0, b=0;
        for(int i=0 ; i<nums.size() ; i+=2)
        {
            if(i == 0) {
                if(nums[i] >= nums[i+1])
                    a+= nums[i] - nums[i+1] + 1;
            }
            else if(i==nums.size() - 1)
            {
                if(nums[i] >= nums[i-1])
                a += nums[i] - nums[i-1] + 1;
            }
            else {
                if(nums[i] >= nums[i+1] || nums[i] >= nums[i-1])
                {
                    a += nums[i] - min(nums[i-1], nums[i+1])+1;
                }
                
            }
            
        }
        for(int i=1 ; i<nums.size() ;i+=2)
        {
            if(i==nums.size()-1) {
                if(nums[i]>=nums[i-1])
                    b+= nums[i] - nums[i-1] + 1;
            } 
            else {
                if(nums[i] >= nums[i+1] || nums[i] >= nums[i-1]) {
                     b += nums[i] - min(nums[i-1], nums[i+1])+1;
                }
            }
        }
        return min(a,b);
    }
};