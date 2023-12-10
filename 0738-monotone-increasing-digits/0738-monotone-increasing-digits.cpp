class Solution {
public:
        int monotoneIncreasingDigits(int N) {
          string str=to_string(N);
            int n=str.size(),ind=n;
            for(int i=n-1;i>0;i--)
            {
                if(str[i] < str[i-1]) {
                    str[i-1]-=1;
                    ind=i;
                }
            }
        
            for(int i=ind;i<n;i++)
                str[i]='9';
            return stoi(str);
    }
};