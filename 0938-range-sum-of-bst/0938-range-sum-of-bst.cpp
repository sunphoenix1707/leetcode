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

  int dfs(TreeNode* root, int l, int h) {
        if(!root) return 0;
        int ans = 0;
        if(root -> val >= l && root -> val <= h) ans += root -> val;

        return ans + dfs(root -> left, l, h) + dfs(root -> right, l, h);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        return dfs(root, low, high);
    }
    
};