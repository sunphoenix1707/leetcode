class Solution {
public:
    int minimumCost(vector<int>& cost) {
      priority_queue<int> pq;
        for(auto c:cost) {
            pq.push(c);
        }
        int sum=0;
        if(pq.size()<3) {
          while(!pq.empty()) {
              sum+=pq.top();
              pq.pop();
          }
            return sum;
        }
        while(!pq.empty() && pq.size()>=3) {
            int t=pq.top();
            pq.pop();
            int s=pq.top();
            pq.pop();
            pq.pop();
            sum+=t+s;
        }
        while(!pq.empty()) {
            sum+=pq.top();
            pq.pop();
            //for handling case [1,2,3,4]
            //here output is 8 instead of 7 how
            // 3+4 gottA 2 for free and added 1=8
        }
        return sum;
    } 
};