using ull = unsigned long long;
class Solution {
private:
    TreeNode* buildTree(vector<int>& parents, vector<int>& nodes) {
        int n = parents.size();
        unordered_map<int,TreeNode*> mp;
        for (int i = 0; i<n; ++i) 
            mp[i] = new TreeNode(nodes[i]);
    
        TreeNode* root = NULL;
        root = mp[0];
        
        for (int i = 1; i < parents.size(); ++i) {
            if (mp[parents[i]]->left == NULL) 
                mp[parents[i]]->left = mp[i];
            else 
                mp[parents[i]]->right = mp[i];
        }

        return root;
    }
    
    unordered_map<ull,int> mp2; // {score,freq}
    ull dfs(TreeNode* root, ull &maxi, int n){
        if(root == NULL){
            return 0;
        }
        
        ull leftCnt = dfs(root->left,maxi,n);
        ull rightCnt = dfs(root->right,maxi,n);
        
        ull upperCnt = n - (leftCnt + rightCnt + 1);
        
        ull val = 1 * (leftCnt > 0 ? leftCnt : 1) * (rightCnt > 0 ? rightCnt : 1) * (upperCnt > 0 ? upperCnt : 1);
        
        mp2[val]++;
        
        // cout<<root->val<<" -> ";
        // cout<<leftCnt<<" "<<rightCnt<<" and val = "<<val<<endl;
        
        maxi = max(maxi, leftCnt+rightCnt+1);
    
        return leftCnt+rightCnt+1;
    }

public:
    int countHighestScoreNodes(vector<int>& parents) {
        int n = parents.size();
        vector<int> nodes(n);
        
        for(int i = 0; i<n; i++) 
            nodes[i] = i;
        
        TreeNode* root = buildTree(parents,nodes);
        
        ull maxi = 0;
        ull num = dfs(root, maxi, n); 
        // cout<<endl;
        
        ull maxScore = 0;
        for(auto it : mp2) 
            maxScore = max(maxScore,it.first);
        
        int res = 0;
        for(auto it : mp2){
            if(it.first == maxScore){
                res = it.second;
                break;
            }
        }
        
        return res;
    }
};