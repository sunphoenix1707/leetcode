class Solution {
public:
       int getmax(string s1,int i) {
          int max=i;
          for(int j=i;j<s1.size();j++)
          {
              if(s1[max]<=s1[j]) {
                  max=j;
              }
          }
          return max;
      }
    int maximumSwap(int num) {
        string s=to_string(num);
        string s1=s;
        for(int i=0;i<s1.length();i++) {
            int t=getmax(s1,i);
            swap(s1[i],s1[t]);
            if(s!=s1) break;
        }
        int a=stoi(s1);
        return a;
    }
};