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
   void helper(TreeNode* root, int curr, int &sum) {
        if(!root) return;
        
        helper(root -> left, curr * 10 + root -> val, sum);
        helper(root -> right, curr * 10 + root -> val, sum);
        
        if(!root -> left && !root -> right) sum += curr * 10 + root -> val;
    }
    
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        helper(root, 0, ans);
        
        return ans;
    }
};