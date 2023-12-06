class Solution {
public:
    //So we have to pick the substring with equal consonants and vowel and must be divisible by k
    int beautifulSubstrings(string s, int k) {
       vector<int> p(s.size());
        for (int i = 0; i < s.size(); i++) {
    p[i] = (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u');
        }
        int ans=0;
        for(int i=0;i<s.size();i++) {
            int b=0,c=0;
            for(int j=i;j<s.size();j++) {
                if(p[j]==1) b++;
                else c++;
                if(b==c && 1LL * b * c % k == 0) ans++;
            }
            
        }
        return ans;
    }
};