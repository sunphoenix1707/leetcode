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
    TreeNode* check(TreeNode* root ,int low ,int hi) 
    {
        if(!root) return NULL;
       if(root->val < low)  return check(root->right,low,hi);
        else if(root->val > hi) return check(root->left,low,hi);
        root->left = check(root->left,low,hi);
        root->right= check(root->right,low,hi);
        return root;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
          return check(root,low,high);
    }
};