class Solution {
public:
    
//we are using here sliding window technique to solve this problem
//string is said to be balance if each of its char appears n/4 times
//for example if our n=4 then each char n/4 = 4/4 = 1 must appear only 1 time
// similarly when n=20  20/4=5 each char must appear 5 times
// now logic is very simple we will take a unordered map and store the count of every       //character in unordered map , after that
  int balancedString(string s)
    {
        unordered_map<char,int>mp;
      int n=s.size();
      int k=n/4;
      int ans=INT_MAX;
      for(int i=0;i<s.size();i++)
          mp[s[i]]++;
      int i=0;
      for(int j=0;j<s.size();j++) {
          mp[s[j]]--;
          while(i<n && mp['Q'] <=k && mp['R']<=k && mp['W']<=k && mp['E']<=k)
          {
              ans=min(ans,j-i+1);
              mp[s[i]]++;
              i++;
          }
      }
        return ans;
    }
};