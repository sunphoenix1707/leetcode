class Solution {
public:
    void help(int indx,vector<vector<int>> &ans, vector<int>&store , int n, int k)
    {
        if(k==0)  {
            ans.push_back(store);
            return;
        }
        for(int i=indx; i<=n ;i++) {
            
            store.push_back(i);
            help(i+1,ans,store,n,k-1);
            store.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>store;
        help(1,ans,store,n,k);
        return ans;
    }
};