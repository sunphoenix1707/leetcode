class Solution {
public:
    void help(vector<int>& nums,int indx, set<vector<int>> &ans , vector<int> &store)
    {
        
    if (store.size() > 1) {
        ans.insert(store);
    }
        for(int i=indx; i<nums.size();i++) {
            if(store.size()==0 || store[store.size()-1] <= nums[i]) {
            store.push_back(nums[i]);
            help(nums,i+1,ans,store);
            store.pop_back();
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
       set<vector<int>> ans;
        vector<int> store;
        help(nums,0,ans,store);
        vector<vector<int>> result(ans.begin(),ans.end());
        return result;
    }
};