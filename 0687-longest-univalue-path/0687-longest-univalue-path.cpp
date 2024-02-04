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
    int dfs(TreeNode* node, int &ans)
    {
              if(!node) return 0;
         int left=dfs(node->left,ans);
         int right=dfs(node->right,ans);
        int l=0,r=0;
         if(node->left && node->val==node->left->val)
             l+=left+1;
         if(node->right && node->val==node->right->val)
             r+=right+1;
        ans= max(ans,r+l);
        return max(l,r);
    }
    int longestUnivaluePath(TreeNode* root) {
        if(!root) return 0;
        int ans=INT_MIN;
        dfs(root,ans);
        return ans;
    }
};