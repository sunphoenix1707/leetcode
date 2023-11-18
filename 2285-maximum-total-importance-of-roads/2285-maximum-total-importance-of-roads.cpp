class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> p(n);
        for(auto r:roads) {
            p[r[0]]++,p[r[1]]++;
        }
        sort(p.begin(),p.end());
        long long ans=0;
        for(int i=0;i<p.size();i++) {
            ans+=(long long) p[i]*(i+1);
        }
        return ans;
    }
};