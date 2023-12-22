class Solution {
public:
    int maxScore(string s) {
        int zeroes=0,ones=0,totalones=0,ans=0;
        for(int i=0 ; i<s.size();i++)
             if(s[i] == '1')
            totalones++;
       for(int i=0; i<s.size()-1 ;i++)
       {
              if(s[i] == '1') ones++;
                  else zeroes++;
            ans=max(ans,zeroes+(totalones-ones));
       }
        return ans;
    }
};