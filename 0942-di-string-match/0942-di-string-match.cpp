class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        vector<int> ans;
        int a=n;
        int b=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='I') {
                ans.push_back(b);
                b++;
            }
            else {
                ans.push_back(a);
                a--;
            }
        }
        if(s[0]=='I') ans.push_back(b);
        else ans.push_back(a);
        return ans;
    }
};