class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string c1="",c2="";
        for(int i=0;i<word1.size();i++) 
            c1+=word1[i];
        for(int i=0;i<word2.size();i++)
            c2+=word2[i];
        if(c1.length()!=c2.length()) return false;
        for(int i=0;i<c1.length();i++)
        {
            if(c1[i]!=c2[i]) return false;
        }
        return true;
    }
};