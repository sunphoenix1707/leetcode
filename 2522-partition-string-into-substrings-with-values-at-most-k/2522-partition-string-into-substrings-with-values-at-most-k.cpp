#define ll long long
class Solution {
public:
    int minimumPartition(string s, int k) {
        int n=s.size();
        string temp="";
        int cnt=0;
        for(int i=0;i<n;i++) {
            temp+=s[i];
            ll val=stoll(temp);
            if(val<=k) {
                
            }
            else {
                cnt++;
                temp=s[i];
                if(s[i]-'0' > k) return -1;
            }
        }
        if(temp!="") {
            ll val=stoll(temp);
            if(val<=k) {
                cnt++;
            }
            else 
                return -1;
        }
        return cnt;
    }
};