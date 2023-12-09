class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int prev_val=nums[1]-nums[0];
        int count = (prev_val!=0) ? 2 : 1;
        for(int i=2 ; i<nums.size() ;i++) {
            int cur_val = nums[i]-nums[i-1];
            if((prev_val >= 0 && cur_val< 0) ||  ( prev_val<=0 && cur_val > 0 ))
            {
                count++;
               prev_val=cur_val;
            }
        }
        return count;
    } 
};