class Solution {
public:
    bool canConstruct(string s, int k) {
        //leetcode - here how can we split leetcode into 3 palindromic strings
        //odd freq char we have  l,t,c,o,d
        //ete eoe so odd freq is more than the k we cannot construct k palindromic strings from this
        //true          here all 4 having odd frequency
        //we can successfully divide into 4 single palindromic strings
        int n=s.size();
        if(n<k) return false;
        unordered_map<int,int>mp;
        for(int i=0;i<s.size();i++) 
            mp[s[i]]++;
          int t=0;
        for(auto x: mp) {
            if(x.second&1) {
                t++;
            }
        }
        return t<=k;
    }
};