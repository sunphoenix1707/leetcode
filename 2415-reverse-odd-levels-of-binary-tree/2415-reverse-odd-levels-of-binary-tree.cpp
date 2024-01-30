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
    void dfs(TreeNode* root1 , TreeNode* root2, int height)
    {
        if(root1==NULL || root2==NULL) return;
        if(!(height%2)) {
            swap(root1->val,root2->val);
        }
        dfs(root1->left, root2->right, height+1);
        dfs(root1->right,root2->left, height+1);
    }
     TreeNode* reverseOddLevels(TreeNode* root) {
      dfs(root->left,root->right,0);
         return root;
    }

    
};