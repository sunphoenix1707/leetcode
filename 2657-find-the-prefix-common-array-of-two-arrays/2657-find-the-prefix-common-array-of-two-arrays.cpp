class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int cnt=0;
        vector<int>ans;
        if(a[0]==b[0]) cnt++;
          ans.push_back(cnt);
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        mp1[a[0]]++;
        mp2[b[0]]++;
        for(int i=1;i<a.size();i++) {
            if(a[i]==b[i]) cnt++;
                else {
                     if(mp1.find(b[i])!=mp1.end()) cnt++;
                    if(mp2.find(a[i])!=mp2.end()) cnt++;
                    mp1[a[i]]++;
                    mp2[b[i]]++;
                    
                }
            ans.push_back(cnt);
        }
        return ans;
    }
};