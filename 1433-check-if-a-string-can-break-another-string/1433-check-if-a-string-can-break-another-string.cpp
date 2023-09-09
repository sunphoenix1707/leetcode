class Solution {
    public: 
    bool solve(string &s1,string &s2) {
        bool flag=false;
        for(int i=0;i<s1.size();i++) {
            if(s1[i] < s2[i]) {
                flag=true;
            }
        }
        if(flag==false) return true;
        return false;
    }
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return solve(s1,s2) ||solve(s2,s1);
    }
};