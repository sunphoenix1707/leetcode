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
    long long total_sum(TreeNode* root) {
       if(!root) return 0;
        return root->val+total_sum(root->left)+total_sum(root->right);
    }
    long long dfs(TreeNode* root,long long &t,long long &p) {
        if(!root) return 0;
        long long ss = root->val+dfs(root->left,t,p) + dfs(root->right,t,p);
        long long rs = t - ss;
        p=max(p,rs*ss);
        return ss;
    }
    int maxProduct(TreeNode* root) {
        if(!root) return 0;
        int mod=1e9+7;
        long long total = total_sum(root);
        long long p=0;
        dfs(root,total,p);
            return  p%mod;
    }
};