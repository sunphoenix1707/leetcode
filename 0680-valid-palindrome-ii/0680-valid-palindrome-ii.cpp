class Solution {
public:
    bool ispal(string a) {
        for(int i=0 , j=a.size()-1 ; i<j ;i++ , j--) {
            if(a[i]!=a[j]) return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        for(int i=0,j=s.size()-1;i<j; i++ ,j--) {
            if(s[i]!=s[j]) {
                string a=s,b=s;
                return ispal(a.erase(i,1)) || ispal(b.erase(j,1));
            }
        }
        return true;
    }
};