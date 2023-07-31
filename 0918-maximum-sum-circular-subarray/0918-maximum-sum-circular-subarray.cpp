class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int temp1=0;
        int temp2=0;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i];
            temp1+=nums[i];
            maxi=(maxi<temp1) ? temp1: maxi;
            temp1=(temp1<0) ? 0 : temp1;
            temp2+=nums[i];
            mini=(mini<temp2) ? mini: temp2;
            temp2=(temp2>0) ? 0:temp2;
        }
        if(sum==mini) 
            return maxi;
        return max(maxi,sum-mini);
    }
};