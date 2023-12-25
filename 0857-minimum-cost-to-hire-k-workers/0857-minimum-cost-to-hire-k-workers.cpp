class Solution {
public:
        double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
         int n = wage.size();
            vector<pair<double,double>> v;
            for(int i=0 ; i<n ;i++)
            {
                double ratio= (double)wage[i]/quality[i];
                 v.push_back({ratio , (double) quality[i]});
            }
            sort(v.begin(), v.end());
            double cur_q=0;
            double ans= DBL_MAX;
            priority_queue<double> pq;
            for(int i=0; i<n ;i++) {
                cur_q += v[i].second;
                 pq.push(v[i].second);
                 if(pq.size() > k) {
                   cur_q -=pq.top();
                     pq.pop();
                }
                    if(pq.size()==k)
                    ans = min(ans , cur_q * v[i].first);
            }
            return ans;
    }
    
};