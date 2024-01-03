class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int i=0;
        int ans=0;
        priority_queue<int,vector<int> , greater<int>> pq;
        sort(events.begin() , events.end());
        for(int d=1 ; d<=100000 ; d++) {
             while(!pq.empty() && pq.top() < d) pq.pop();
             while(i < events.size() && events[i][0] == d)
                 pq.push(events[i++][1]);
            if(pq.size()) {
                pq.pop();
                ans++;
            }
        }
        return ans;
    }
    
};