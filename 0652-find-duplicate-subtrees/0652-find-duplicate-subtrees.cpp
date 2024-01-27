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
string res(TreeNode* root, vector<TreeNode*> &v,unordered_map<string,int> &mp )
{
    if(root == NULL) return "N";
 string a = to_string(root->val) + "," + res(root->left,v,mp) + "," + 
     res(root->right,v,mp);
    if(mp[a]==1)
        v.push_back(root);
    mp[a]++;
    return a;
    
}
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> v;
        unordered_map<string,int> mp;
        res(root,v,mp);
        return v;
    }
};