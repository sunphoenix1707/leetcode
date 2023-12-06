class Solution {
public:
    int totalMoney(int n) {
        int days=1,monday=1,ans=0,cnt=1;
            while(n--) {
                ans+=cnt;
                cnt++;
                if(days==7) {
                    monday++;
                    cnt=monday;
                    days=0;
                }
                days++;
            }
        return ans;
    }
};