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
    TreeNode* dfs(vector<int> nums,int l,int r) 
    {
        if(r<l) return NULL;
        int mid = l+(r-l)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = dfs(nums,l,mid-1);
        node->right=dfs(nums,mid+1,r);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return dfs(nums,0,nums.size()-1);
    }
};