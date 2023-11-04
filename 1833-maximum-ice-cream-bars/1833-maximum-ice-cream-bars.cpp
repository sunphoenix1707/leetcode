class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        priority_queue<int> pq;
        for(auto i: costs) pq.push(-i);
        int ans=0;
       for(int i=0;i<costs.size();i++) {
           int elem = pq.top();
           pq.pop();
           elem=-elem;
           if(coins==0 || coins<elem) break;
               coins=coins-elem;
               ans++;
           
       }
        return ans;
    }
};