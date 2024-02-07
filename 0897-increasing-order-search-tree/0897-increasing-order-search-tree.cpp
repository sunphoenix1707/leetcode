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
    vector<int> inorder(TreeNode* root, vector<int>&v)
    {
        if(root!=NULL) {
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
        return v;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> in;
        inorder(root,in);
        TreeNode *dummy=new TreeNode(0);
        TreeNode* s=dummy;
        int i=0;
        while(i<in.size()) {
            s->right=new TreeNode(in[i]);
            s=s->right;
            i++;
        }
        return dummy->right;
    }
};