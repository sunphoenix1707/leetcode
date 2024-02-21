class Solution {
public:
   int prefixCount(vector<string>& words, string pref) {
    int ans = 0;

   for(auto word: words) {
       int m=0;
       for(int i=0; i<pref.size();i++)
       {
           if(word[i]==pref[i]) m++;
           else break;
       }
       if(m==pref.size()) ans++;
   }
       return ans;
}
};