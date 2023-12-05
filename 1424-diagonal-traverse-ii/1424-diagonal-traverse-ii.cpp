class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        int n=nums.size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++) {
            for(int j=0;j<nums[i].size();j++) {
                mp[i+j].push_back(nums[i][j]);
            }
        }
        for(auto i : mp) {
            for(int j=i.second.size()-1 ; j>=0 ; j--) {
                ans.push_back(i.second[j]);
            }
        }
        return ans;
    }
};