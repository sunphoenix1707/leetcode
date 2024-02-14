class Solution {
public:
    void helper(vector<int>& candidates , int idx , int target , vector<int> store , vector<vector<int>> & ans)  {
        if(candidates.size() == idx) {
            if(target==0)
            {
                ans.push_back(store);
            }
            return;
        }
        if(candidates[idx] <= target) {
            store.push_back(candidates[idx]);
            helper(candidates, idx , target-candidates[idx], store,ans);
            store.pop_back();
        }
        helper(candidates, idx+1, target,store,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> store;
        helper(candidates,0,target,store,ans);
        return ans;
    }
};