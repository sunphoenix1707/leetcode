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
    //Applying bfs using recusion
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int d=0;
        while(!q.empty()) {
            int n = q.size();
            while(n--) {
            TreeNode * temp=q.front();
            q.pop();
            if(!temp->left && !temp->right) return d+1;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            
        }
            d++;
        }
        return d;
    }
};