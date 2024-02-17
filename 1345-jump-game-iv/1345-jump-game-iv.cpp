class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int,vector<int>> mp;
    for(int i=0; i<arr.size();i++)      mp[arr[i]].push_back(i);
        queue<int> q;
        int n=arr.size();
        vector<int> vis(arr.size(),0);
        vis[0]=1;
        q.push(0);
        int steps=0;
        while(!q.empty()) {
            int k=q.size();
            while(k--) {
            int e = q.front();
            q.pop();
             if(e == n-1) return steps;
            if( e+1 < n && e+1 >=0 && vis[e+1]==0) {
                vis[e+1]=1;
                q.push(e+1);
            }
            if( e-1 >=0 && e-1 < n &&  !vis[e-1]) {
                vis[e-1]=1;
                q.push(e-1);
            }
            for(auto i : mp[arr[e]]) {
                if(!vis[i]) {
                    vis[i]=1;
                    q.push(i);
                }
            }
                 mp.erase(arr[e]);
          }
            steps++;
        }
        return -1;
    }
};