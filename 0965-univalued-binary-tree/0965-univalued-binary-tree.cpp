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
    bool preorder(TreeNode* root, int value) {
        if(!root) return true;
        if(root->val != value) return false;
        return preorder(root->left, value)&& preorder(root->right,value);
        
    }
    bool isUnivalTree(TreeNode* root) {
        return preorder(root, root->val);
    }
};