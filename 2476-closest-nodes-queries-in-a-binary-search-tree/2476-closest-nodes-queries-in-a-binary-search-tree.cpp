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
    vector<int> arr;
public:
    void inorder(TreeNode* root) {
        if(!root) return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }
    vector<int> find(int value , int low, int high) {
        int mini = -1, maxi =-1;
        while(low<=high) {
            int mid = low + (high - low)/2;
            if( value == arr[mid]) {
                return {arr[mid], arr[mid]};
            }
            
            if(value > arr[mid]) {
                mini = arr[mid];
                low = mid+1;
            }
            else {
                maxi = arr[mid];
                high = mid-1;
            }
        }
        return {mini , maxi};
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        inorder(root);
        vector<vector<int>> res;
        
        for(int i=0; i<queries.size(); i++) {
            res.push_back(find(queries[i] , 0 , arr.size()-1));
        }
        return res;
    }
};