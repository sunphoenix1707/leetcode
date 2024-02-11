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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*,int>> q;
        q.push({root,-1});
      int s,v;
        bool res=false;
        int d=0;
        int ma=0;
        int da=0;
        while(!q.empty()) {
            int n=q.size();
            while(n--) {
               
                TreeNode* temp=q.front().first;
                int pa=q.front().second;
                q.pop();
            if(x==temp->val)   s=d ,ma=pa;
            if(y==temp->val)    v=d ,da=pa;
                if(temp->left) q.push({temp->left,temp->val});
                if(temp->right) q.push({temp->right,temp->val});
            }
             d++;
        }
        if(s==v  && ma!=da) res=true;
        return res;
    }
};