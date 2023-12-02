class Solution {
public:
    static bool cmp(string s1,string s2) {
        return s1+s2>s2+s1;
    }
    string largestNumber(vector<int>& nums) {
        
        vector<string> v;
        for(auto i:nums) 
            v.push_back(to_string(i));
           sort(v.begin(),v.end(),cmp);
        string ans="";
        for(auto p:v) ans+=p;
        while(ans[0]=='0' && ans.size()>1) ans.erase(0,1);
        return ans;
    }
};