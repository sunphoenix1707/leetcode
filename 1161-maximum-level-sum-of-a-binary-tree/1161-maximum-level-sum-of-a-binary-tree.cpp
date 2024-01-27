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
    //Simple BFS Can Help
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int sum=INT_MIN, l=1 ,s;
        int ans;
        while(!q.empty()) {
            int n = q.size();
             s=0;
            while(n--) {
                TreeNode* temp=q.front();
                q.pop();
                s+=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(s>sum) sum=s,ans=l;
            l++;
        }
        return ans;
    }
};