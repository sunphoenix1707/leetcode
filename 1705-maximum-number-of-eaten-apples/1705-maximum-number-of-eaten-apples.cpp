class Solution {
public:
    using par=pair<int,int>;
    int eatenApples(vector<int>& apples, vector<int>& days) {
        priority_queue<par,vector<par>,greater<par>>pq;
        int i=0, n = apples.size() , ans=0;
        while(i<n || !pq.empty()) 
        {
            if(i<n && apples[i])
            pq.push({i + days[i] -1 , apples[i]});
            while(!pq.empty() && i > pq.top().first ) pq.pop();
            if(!pq.empty())
            {
                auto [s,v] = pq.top();
                pq.pop();
                ans++;
                v--;
                if(s > i && v) pq.push({s,v});
            }
            i++;
        }
        return ans;
    }
};