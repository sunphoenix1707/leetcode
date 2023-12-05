class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
     vector<int> ss = nums;
        for(int i=nums.size()-2;i>=0;i--) ss[i] += ss[i+1];
        int var=0;
        for(int i=0;i<nums.size() ; i++) {
            ans.push_back(abs(var-nums[i] * i) + abs(ss[i]-nums[i] * (n-i)));
            var+=nums[i];
        }
        return ans;
}
    
};