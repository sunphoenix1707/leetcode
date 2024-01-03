class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int prev=0, ans=0;
       
        for(int i=0 ; i<n ;i++) {
             int cur=0;
            for(char c : bank[i]) {
                if(c=='1')   cur++;
            }
            ans += prev*cur;
            if(cur != 0) {
                prev = cur;
            }
        }
        return ans;
    }
};