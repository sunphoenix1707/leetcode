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
    //level order traversal from bottom and adding sum
public:
//     int deepestLeavesSum(TreeNode* root) {
//         queue<TreeNode*> q;
//         q.push(root);
//         int sum=0;
//         vector<vector<int>> ans;
//         while(!q.empty()) {
//             int n=q.size();
//             vector<int> v;
//             while(n--) {
//                 TreeNode* temp=q.front();
//                 q.pop();
//                 v.push_back(temp->val);
//                 if(temp->left)
//                     q.push(temp->left);
//                 if(temp->right)
//                     q.push(temp->right);
                
//             }
//             ans.push_back(v);
//         }
//         reverse(ans.begin(),ans.end());
//         for(int i=0; i<ans.size();i++) {
//             for(int j=0;j<ans[i].size();j++) {
//                 sum+=ans[i][j];
//             }
//             break;
//         }
//         return sum;
//     }
    int deepestLeavesSum(TreeNode* root) {
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int n = q.size();
            ans = 0;
            
            while(n--) {
                TreeNode* temp = q.front(); q.pop();
                ans += temp -> val;
                
                if(temp -> left) q.push(temp -> left);
                if(temp -> right) q.push(temp -> right);
            }
        }
        return ans;
    }
};