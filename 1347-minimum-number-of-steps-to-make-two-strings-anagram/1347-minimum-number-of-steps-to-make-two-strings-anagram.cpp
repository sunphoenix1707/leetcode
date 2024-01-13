class Solution {
public:
    int minSteps(string s, string t) {
        int freq[26]={0};
        for(auto c:s) 
        freq[c-'a']++;
        for(auto c:t)
        freq[c-'a']--;
        int res=0;
        for(int i=0;i<26;i++) {
            res+=abs(freq[i]);
        }
        return res/2;
    }
};
//Anagram //Mangaar
//a=3-2=1,  return 1/2=0;