class Solution {
public:
   
vector<int> mostCompetitive(vector<int>& nums, int k) {
       vector<int> ans;
    for(int i=0; i<nums.size() ;i++) {
        while(ans.size() && ans.back()>nums[i] && nums.size()+ans.size()-i-1>=k)
            ans.pop_back();
        ans.push_back(nums[i]);
    }
    while(ans.size() > k) ans.pop_back();
    return ans;
    }
};