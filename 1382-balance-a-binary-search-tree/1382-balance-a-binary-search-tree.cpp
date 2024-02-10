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
    vector<TreeNode* > inorder;
    TreeNode* balanceBST(TreeNode* root) {
        if(!root) return NULL;
        balanceBST(root->left);
        inorder.push_back(root);
        balanceBST(root->right);
        
        return makebalance(inorder, 0 , inorder.size()-1);
    }
    TreeNode* makebalance(vector<TreeNode*> &inorder,int low,int hi)
    {
         
         if(low> hi) return NULL;
         int mid = low+(hi-low)/2;
        TreeNode *root =  (inorder[mid]);
        root->left = makebalance(inorder , low , mid-1);
        root->right = makebalance(inorder, mid+1 , hi);
        
        return root;
        
    }
};