class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int,int> mp;
        for(auto c:answers)  mp[c]++;
        int ans=0;
        for(auto i:mp)
        {
            int x=i.first;
            int y=i.second;
            x++;
            int a=y/x;
            if(y%x) a++;
            ans+=a*x;
        }
        return ans;
    }
};