class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0; i<nums.size();i++) pq.push({nums[i],i});
             long long sum=0;
        vector<int> vis(nums.size(),0);
            while(!pq.empty())  {
                int a = pq.top().first;
                int b= pq.top().second;
                pq.pop();
                if(vis[b]==0) {
                    vis[b]=1;
                    sum+=a;
                    if(b-1>=0 )  vis[b-1]=1;
                    if(b+1<nums.size())  vis[b+1]=1;
                }
                
            }
        return sum;
    }
};