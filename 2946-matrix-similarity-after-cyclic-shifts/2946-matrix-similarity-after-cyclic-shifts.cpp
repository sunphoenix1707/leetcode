class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        for(int row=0;row<n;row++) {
            for(int col=0;col<m;col++) {
                if(mat[row][col]!=mat[row][(col+k)%m]) return false;
            }
        }
        return true;
    }
};