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
    bool ones(TreeNode* root) {
        if(!root) return false; 
        if(root->val==1) return true;
        return ones(root->left) || ones(root->right);
    }
    TreeNode* pruneTree(TreeNode* root) {
        if(!root)  return NULL;

        if(!ones(root->left))
            root->left=NULL;
        if(!ones(root->right))
            root->right=NULL;
        pruneTree(root->left);
        pruneTree(root->right);
    if(root->left==NULL && root->right==NULL && root->val==0) return NULL;
        return root;
    } 
};