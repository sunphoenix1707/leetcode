class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
                 priority_queue<int, vector<int> , greater<int> > pq1,pq2;
                 int n = costs.size();
                int hired=0 , i=0 , j=n-1;
                 long long res=0;
                 while(hired < k) {
                    while(pq1.size() < candidates && i<=j) {
                        pq1.push(costs[i]);
                        i++;
                    }
                     while(pq2.size() < candidates && j>=i) {
                         pq2.push(costs[j]);
                         j--;
                     }
                     int top1= (pq1.size()>0) ? pq1.top() : INT_MAX;
                     int top2 = (pq2.size()>0) ? pq2.top() : INT_MAX;
                     if(top1 <= top2) {
                         res+= top1;
                         pq1.pop();
                     }
                     else {
                         res+= top2;
                         pq2.pop();
                     }
                     hired++;
                     } 
                   return res;
    }
};