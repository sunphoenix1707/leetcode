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
       int findBottomLeftValue(TreeNode* root) {
            int ans=0;
           int height=0;
           dfs(root,1,height,ans);
           return ans;
    }
    void dfs(TreeNode* root,int depth,int &height,int &ans)  {
   if(!root) return;
        if(depth>height) {
            height=depth;
            ans=root->val;
        }
        dfs(root->left,depth+1,height,ans);
        dfs(root->right,depth+1,height,ans);
    }
};