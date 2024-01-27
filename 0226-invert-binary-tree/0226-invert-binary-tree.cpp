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
    TreeNode* invertTree(TreeNode* root) {
         if(root == nullptr)
            return root;
        //Prepare your BFS queue
        queue<TreeNode*> bfsQueue;
        bfsQueue.push(root);
         while(!bfsQueue.empty()){
                TreeNode* current = bfsQueue.front();
                bfsQueue.pop();
              int n = bfsQueue.size();
          
                TreeNode* temp = current->left;
            current->left = current->right;
            current->right = temp;
            
            if(current->left != nullptr)
                bfsQueue.push(current->left);
            if(current->right != nullptr)
                bfsQueue.push(current->right);
            
           
        }
        return root;
    }
};