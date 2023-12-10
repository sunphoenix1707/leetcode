class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        int ans=0;
        for(auto i: tasks) mp[i]++;
        priority_queue<int> pq;
        for(auto c:mp)
            pq.push(c.second);
        int cycle=n+1;
        while(!pq.empty()) {
            vector<int> temp;
            int time=0;
            for(int i=0;i<cycle;i++) {
                if(!pq.empty()) {
                    int a = pq.top();
                    pq.pop();
                    temp.push_back(a);
                    time++;
                }
            }
            for(auto c:temp) {
                if(--c)
                    pq.push(c);
            }
         ans += (!pq.empty()) ? cycle : time;
        }
        return ans;
    }
};