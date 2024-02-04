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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        long long ans=0;
        int cnt_of_level=0;
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            long long sum=0;
        long long n=q.size();
            while(n--) {
                TreeNode* temp=q.front();
                q.pop();
                sum +=temp->val;
                 ans=max(ans,sum);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                
            }
             cnt_of_level++;
             pq.push(sum);
            if(pq.size() > k) pq.pop();
        }
        return cnt_of_level<k ? -1 : pq.top();
    }
};