class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(auto c:s) {
            mp[c]++;
        }
        vector<int> a;
        for(auto p:mp) {
            a.push_back(p.second);
        }
        int ans=0;
        sort(a.begin(),a.end(),greater<int>());
        for(int i=1;i<a.size();i++) {
                if(a[i]>=a[i-1]) {
                    int temp=a[i];
                    a[i]=a[i-1] ? a[i-1]-1:0;
                       ans+=temp-a[i];
                }
           
        }
         return ans;
    }
};
// suppose freq 3,3 ,2 in decreasing order
// v[1]  > = v[0] 3 >= 3
// temp=v[1]=3
//3=3 ? 3-1:0
//ans+=3-2=1 
//now 3 2 2 i is at last index
// again ans=2