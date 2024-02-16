class Solution {
public:
    void help(int indx, int sum , vector<vector<int>> &ans, vector<int> &store, int k,int n)
    {
        if(sum==n && k==0)
        {
            ans.push_back(store);
            return;
        }
        // if(sum > n) return;
        for(int i=indx; i<=9; i++) {
            if(i>n) break;
             if(sum > n) break;
            store.push_back(i);
            help(i+1,sum+i,ans,store,k-1,n);
            store.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> store;
        help(1,0,ans,store,k,n);
        return ans;
    }
};