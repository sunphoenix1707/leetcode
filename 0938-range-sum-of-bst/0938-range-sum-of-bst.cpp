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

         int traverse(TreeNode* root,int l,int h){
        int n, ans=0;
        if(root == nullptr) return 0;
        n = root->val;
        int left = traverse(root->left,l,h);
        int right = traverse(root->right,l,h);
        if(n>=l && n<=h) ans = n;
        return left + right + ans;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return traverse(root,low,high);
    }
    
};