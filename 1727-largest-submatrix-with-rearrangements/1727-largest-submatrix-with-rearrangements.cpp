class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        vector<vector<int>>& mat=matrix;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int row=1;row<n;row++) {
            for(int col=0;col<m;col++) {
                if(mat[row][col]==1)
                    mat[row][col] = mat[row-1][col]+1;
            }
        }
        for(auto &i:mat) {
            sort(i.begin(),i.end(),greater<int>());
        }
        int ans=0;
        for(auto row:mat) {
            int mn=1e9;
            for(int j=0;j<m;j++) {
                ans=max(ans,row[j]*(j+1));
            }
        }
        return ans;
    }
};