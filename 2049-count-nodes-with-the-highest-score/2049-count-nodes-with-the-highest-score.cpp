class Solution {
public:
    using ull = unsigned long long;
    TreeNode* BuildTree(vector<int> &parents, vector<int> &nodes)
    {     int n=parents.size();
        unordered_map<int,TreeNode*>mp;
        for(int i=0; i<n;++i)
            mp[i]= new TreeNode(nodes[i]);
        TreeNode* root=NULL;
        root=mp[0];
        for(int i=1;i<parents.size();++i)
        {
            if(mp[parents[i]]->left==NULL)
                mp[parents[i]]->left=mp[i];
                else 
                    mp[parents[i]]->right=mp[i];
        }
        return  root;
    }
    unordered_map<ull,int>mp2;
    ull dfs(TreeNode* root,ull &maxi,int n) {
        if(root==NULL) return 0;
        ull leftc=dfs(root->left,maxi,n);
        ull rightc=dfs(root->right,maxi,n);
        ull upper= n - (leftc+rightc+1);
        
        ull val = 1*(leftc>0?leftc:1)*(rightc>0?rightc:1)*(upper>0?upper:1);
        mp2[val]++;
        // cout<<root->val<<" -> ";
        // cout<<leftc<<" "<<rightc<<" and val = "<<val<<endl;
        maxi=max(maxi,leftc+rightc+1);
        return leftc+rightc+1;
        
    }
    int countHighestScoreNodes(vector<int>& parents) {
        int n = parents.size();
        vector<int> nodes(n);
        for(int i=0;i<n;++i)
            nodes[i]=i;
        TreeNode* root = BuildTree(parents,nodes);
        ull maxi=0;
        ull num=dfs(root,maxi,n);
            ull maxscore=0;
           for(auto it:mp2) 
               maxscore=max(maxscore,it.first);
           
           int res=0;
            for(auto it:mp2) {
                  if(it.first==maxscore) {
                    res=it.second;
                break;
                  }
            }
        return res;
    }
};