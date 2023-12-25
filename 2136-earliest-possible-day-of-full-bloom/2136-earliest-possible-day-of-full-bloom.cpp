class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int  n = plantTime.size();
        vector<pair<int,int>> v(n);
        for(int i=0 ; i<n ;i++)
        {
            v.push_back({growTime[i] , plantTime[i] });
        }
        auto sorting = [] (pair<int,int> &p1 , pair<int,int> &p2)
        {
            return p1.first>p2.first;
        };
        sort(v.begin(), v.end(), sorting);
        int total_p=0, ans=0;
         for(int i=0 ; i<n ; i++)
         {
             int cur_p = v[i].second;
             int cur_g= v[i].first;
             total_p+=cur_p;
             int total_g= total_p + cur_g;
               ans = max(ans, total_g);
         }
        return ans;
    }
};