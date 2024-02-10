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
int ans;
class calculate {
    public:
    bool bst;
    int maxi;
    int mini;
    int maxisum;
    calculate() {
       bst = true;
        maxi=INT_MIN;
        mini=INT_MAX;
        maxisum=0;
    }
};
class Solution {
public:
    calculate findsum(TreeNode* root) {
        if(root==NULL) return calculate();
        calculate p;
        calculate l = findsum(root->left);
        calculate r = findsum(root->right);
        if(l.bst==true && r.bst==true && root->val > l.maxi && root->val < r.mini)
        {
            p.bst = true;
            p.maxisum = l.maxisum+ r.maxisum + root->val;
            p.mini = min(root->val ,l.mini);
            p.maxi = max(root->val, r.maxi);
        }
        else {
            p.bst = false;
            p.maxisum = max(l.maxisum , r.maxisum);
        }
        ans = max(ans,p.maxisum);
        return p;
    }
    int maxSumBST(TreeNode* root) {
        ans=0;
        findsum(root);
        return ans;
    }
};