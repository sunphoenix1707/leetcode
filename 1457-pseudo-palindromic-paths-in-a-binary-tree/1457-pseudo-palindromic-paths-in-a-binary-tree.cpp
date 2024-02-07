/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,int &ans,vector<int> &v) {
        if(!root) return;
        v[root->val]++;
        
       
        if(root->left==NULL && root->right==NULL)  {
             int cnt=0;
            for(int i=0;i<=9;i++)   {
                if(v[i]%2!=0)  
                    cnt++;
            }
           if(cnt<=1)  ans++;
            
        }
                
     
     
        solve(root->left,ans,v);
        solve(root->right,ans,v);
        
        v[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int ans=0;
        vector<int> v(10,0);
        solve(root,ans,v);
        
        return ans;
    }
};