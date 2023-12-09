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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        TreeNode* node=root;
        vector<int> inorder;
        if(root == NULL) return inorder;
        while(true) {
            if(node!=NULL) {
                s.push(node);
                node=node->left;
            }
            else {
                if(s.empty()==true)     break;
                node=s.top();
                s.pop();
                inorder.push_back(node->val);
                node=node->right;
            }
        }
        for(int i=0;i<inorder.size();i++) {
            cout<<inorder[i];
        }
        return inorder;
    }
};