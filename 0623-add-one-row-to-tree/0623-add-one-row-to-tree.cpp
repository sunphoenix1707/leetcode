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
        TreeNode* dfs(TreeNode* root,int val,int d,int curr) {
            if(!root) return NULL;
            if(curr==d-1) {
                TreeNode* left_val=root->left;
                TreeNode* right_val=root->right;
                
                root->left = new TreeNode(val);
                root->right= new TreeNode(val);
                
                root->left->left=left_val;
                root->right->right=right_val;
                
              
            }
            
            dfs(root->left,val,d,curr+1);
            dfs(root->right,val,d,curr+1);
            return root;
        }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1) {
         TreeNode* new_root = new TreeNode(val);
            new_root->left=root;
            return new_root;
        }
        int curr=1;
        return dfs(root,val,depth,curr);
    }
};