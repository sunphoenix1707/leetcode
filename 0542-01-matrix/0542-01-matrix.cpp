class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size(),0))
            ,vis(mat.size(),vector<int>(mat[0].size(),0));
         vector<int> dx = {-1,0,1,0};
         vector<int> dy = {0,1,0,-1};
         int ones =0 , d=1;
         queue<pair <int,int >> q;
         for(int i=0 ; i < mat.size() ; i++) {
             for(int j=0 ; j<mat[0].size() ; j++) {
                 (!mat[i][j]) ? (q.push({i,j}) , vis[i][j] = 1) : ones++;
             }
         }
        
         while(q.size() && ones) {
             int n=q.size();
             while(n--) {
                 int i = q.front().first;
                 int j = q.front().second;
                 q.pop();
                 for(int k=0 ; k<4 ;k++) {
                     int x = i + dx[k];
                     int y = j + dy[k];
                     if(x>=0 && x< mat.size() && y >= 0 && y< mat[0].size() && !vis[x][y])
                     {
                         if(mat[x][y]) ones--, ans[x][y]=d;
                         q.push({x,y}), vis[x][y]=1;
                     }
                 }
             }
             d++;
         }
        return ans;
    }
};