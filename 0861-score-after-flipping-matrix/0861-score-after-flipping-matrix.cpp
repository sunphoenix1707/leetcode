class Solution {
    int b2d(vector<int> v) {
        int dec = 0;
        reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++) if(v[i]) dec += pow(2, i);
        return dec;
    }
public:
    //Approach is very simple-We iterate the row and will check if there is any leftmost 0, if there is we will toggle the entire row After that we will check all the columns if number of zeroes in that column is greator than ones we will simply toggle that columns.
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        for(auto &r: grid) {
            if(!r[0]) //it means expression comes out to be true if leftmost element is 0
                for(int &a:r)  a = a ? 0 : 1;
             }
        for(int c=0; c<m ; c++) {
            int cnt_0=0,cnt_1=0;
           for(int r=0; r<n ;r++)
               grid[r][c] ? cnt_1++ : cnt_0++;
               if(cnt_0 > cnt_1) {
                for(int r=0; r<grid.size(); r++) grid[r][c] = grid[r][c] ? 0 : 1;
                 }
            }
        int ans = 0;
        for(auto r : grid) ans += b2d(r);
        
        return  ans;
        
    }
};