class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> p(n);
        for(auto e:roads) {
            p[e[0]]++,p[e[1]]++;
        }
        
        vector<pair<int , int >> v;
        for(int i=0 ;i<p.size() ;i++) {
            v.push_back({p[i],i});
        }
        long long ans=0;
        sort(v.begin(),v.end());
        unordered_map<int ,int >rank;
        for(int i=0; i<v.size();i++)
            rank[v[i].second] = i+1;
        for(auto e: roads) 
            ans+=rank[e[0]] + rank[e[1]];
        return ans;
    }
};