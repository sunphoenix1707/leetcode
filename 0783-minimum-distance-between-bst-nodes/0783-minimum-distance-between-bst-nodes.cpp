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
    void inorder(TreeNode* root,int &prev,int &ans)
    {
        if(!root) return;
        inorder(root->left,prev,ans);
        ans=min(ans,root->val-prev);
        prev = root->val;
        inorder(root->right,prev,ans);
    }
    int minDiffInBST(TreeNode* root) {
        int prev=-1e9;
        int ans=1e9;
        inorder(root,prev,ans);
        return ans;
    }
};