class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] > 0) v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
        }
        vector<int>ans(nums.size(),0);
        for(int i=0;i<v1.size();i++)
        {
            ans[2*i]=v1[i];
        }
         for(int i=0;i<v2.size();i++)
        {
            ans[2*i+1]=v2[i];
        }
        return ans;
        
    }
};