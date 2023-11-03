class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto i:nums) pq.push(i); 
        int ans=0;
        for(int i=0;i<k;i++) {
           int e=pq.top();
            ans+=e;
            pq.pop();
            int val=e+1;
            pq.push(val);
            
        }
        return ans;
    }
};