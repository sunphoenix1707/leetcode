class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n =  nums.size();
        int res = nums[k];
        int curr=nums[k];
        int i=k  , j=k;
        while(i > 0 || j < n-1)
        {
            int leftvalue=(i>0) ? nums[i-1] : 0;
            int rightvalue = (j<n-1) ? nums[j+1] : 0;
            if(leftvalue > rightvalue)
            {
                i--;
                curr = min(curr , nums[i]);
            }
            else {
                j++;
                curr = min(curr, nums[j]);
            }
            res = max(res , curr * (j-i+1));
        }
        return res;
    }
};