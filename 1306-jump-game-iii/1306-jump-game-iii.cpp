class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int>  q;
        q.push(start);
        int n = arr.size();
        vector<int> vis(n);
        vis[start]=1;
         while(!q.empty()) {
             int t = q.front();
             q.pop();
             if(!arr[t]) return true; 
             if(t+arr[t] < n && !vis[t+arr[t]]) {
                 q.push(t+arr[t]);
                 vis[t + arr[t]]=1;
             }
              if(t-arr[t] >=0  && !vis[t-arr[t]]) {
                 q.push(t-arr[t]);
                 vis[t - arr[t]]=1;
             }
         }
        
        return false;
    }
};