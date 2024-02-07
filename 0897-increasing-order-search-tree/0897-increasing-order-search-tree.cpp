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
    void inorder(TreeNode* root,TreeNode* &p) {
        if(!root) return;
        inorder(root->left,p);
        p->right=new TreeNode(root->val);
        p=p->right;
        inorder(root->right,p);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* p= new TreeNode();
        TreeNode* dummy=p;
        inorder(root,p);
            return dummy->right;
    }
};