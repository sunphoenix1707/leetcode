class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        //this is basic approach without any custom sorting
        int n=pairs.size(),ans=1;
        sort(pairs.begin(),pairs.end());
        int p=pairs[n-1][0];
        for(int j=n-1; j>=0; j--) {
            if(pairs[j][1] < p) {
                p=pairs[j][0];
                ans++;
            }
        }
        return ans;
    }
};