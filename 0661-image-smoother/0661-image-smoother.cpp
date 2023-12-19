class Solution {
public:
       vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size(), m = img[0].size();
        vector<vector<int>> ans(n, vector<int>(m));

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int sum = 0, cnt = 0;
                for(int x=max(0, i - 1); x<min(n, i + 2); x++) {
                    for(int y=max(0, j - 1); y<min(m, j + 2); y++) {
                        sum += img[x][y];
                        cnt++;
                    }
                }
                ans[i][j] = sum / cnt;
            }
        }
        return ans;
    }
};