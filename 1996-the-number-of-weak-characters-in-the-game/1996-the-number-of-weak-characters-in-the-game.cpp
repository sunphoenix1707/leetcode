class Solution {
public:
    bool static cmp(vector<int>&a , vector<int> &b) {
        return a[0]==b[0] ? a[1]>b[1] : a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& a) {
         sort(a.begin() , a.end() , cmp);
         int ans=0, mx=INT_MIN;
        for(int i=a.size()-1 ; i>=0 ;i--) {
            mx= max(mx , a[i][1]);
            if(a[i][1] < mx) ans++;
        }
        return ans;
    }
};