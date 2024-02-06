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
    //Optimized approach is we will find the minimum and the maximum of the each path then after finding the maximum and minimum of each path then we will substract the maximum and minimum of each path after that
    //whatever the greator ans we get is our ans
    void dfs(TreeNode* root,int maxi,int mini,int &ans) {
        if(!root) return;
        maxi=max(maxi,root->val);
        mini=min(mini,root->val);
        ans=max(ans,maxi-mini);
        dfs(root->left,maxi,mini,ans);
        dfs(root->right,maxi,mini,ans);
    }
    int maxAncestorDiff(TreeNode* root) {
        int ans=0;
        dfs(root,-1e9,1e9,ans);
        return ans;
    }
};