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
    TreeNode* func_del(TreeNode* root,unordered_set<int>&st, vector<TreeNode*> &result)
    {
           if(root==NULL) return NULL;
         root->left=func_del(root->left,st,result);
        root->right=func_del(root->right,st,result);
          if(st.find(root->val) != st.end()) {
              if(root->left)
                   result.push_back(root->left);
              if(root->right)
                  result.push_back(root->right);
              return NULL; //deleting node
          }
        else {
            return root;
        }
        
        }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> result;
        unordered_set<int>st;  //so that we can access this vector more easily
        for(int &num: to_delete) { 
            st.insert(num);
        }
        func_del(root,st,result);
        /*Now if set doesnot have root node means we donot have to delete root node then we need to add it in our result */
        
        if(st.find(root->val)==st.end()) {
            result.push_back(root);
        }
        return result;
    }
};