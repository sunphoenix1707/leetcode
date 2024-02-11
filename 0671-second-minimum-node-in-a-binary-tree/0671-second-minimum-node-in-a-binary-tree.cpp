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
    int findSecondMinimumValue(TreeNode* root) {
         if (!root) return -1;
        int ans=-1;
        queue<TreeNode*> q;
        priority_queue<int,vector<int>,greater<int>>pq;
        q.push(root);
        while(!q.empty()) {
            int n=q.size();
            while(n--) {
                 TreeNode* temp=q.front();
                 q.pop();
                pq.push(temp->val);
               if(temp->left) q.push(temp->left);
               if(temp->right) q.push(temp->right);
            }
        }
        int value=pq.top();
        pq.pop();
        while(!pq.empty() && pq.top()==value) {
            pq.pop();
        }
         if(!pq.empty())  ans= pq.top();
        return ans;
    }
};