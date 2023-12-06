#define ll long long int
#define mod 1000000007
class Solution {
public:
    vector<vector<int>> jumps = {
        {4,6},
        {6,8},
        {7,9},
        {4,8},
        {3,9,0},
        {},
        {1,7,0},
        {2,6},
        {1,3},
        {4,2}
    };
    vector<vector<ll>> dp;

    int knightDialer(int n) {
        dp.resize(n+1,vector<ll>(10,0));
      
         
    //base case for bottom up
    for(int digit=0;digit<10;digit++) {
        dp[0][digit]=1;
    }
        
        for(int rem=1;rem<=n-1;rem++) {
            for(int digit=0;digit<10;digit++) {
                  ll ans=0;
                for(int nextdigit : jumps[digit]) {
                    ans=(ans+dp[rem-1][nextdigit])%mod;
                }
                dp[rem][digit]=(ans%mod);
            }
        }
          ll ans=0;
        for(int digit=0;digit<10;digit++) {
            ans=(ans+dp[n-1][digit])%mod;
        }
        return (ans%mod);
    }
};