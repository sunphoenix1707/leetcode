class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //here we will  be using two pointer technique
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int a=0,b=0;
        int n=g.size();
        int m=s.size();
        int ans=0;
        while(a<n && b<m) {
            if(s[b]>=g[a]) 
            {  ans++;
               a++;
                
            }
            b++;
        }
        return ans;
    }
};