class Solution {
public:
    static bool compare(vector<int> &v1,vector<int> &v2) {
        return (v1[0]-v1[1]<v2[0]-v2[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        sort(costs.begin(),costs.end(),compare);
        int sum = 0;
        for (int i = 0;i < n; i++) {
            sum += i<n/2 ? costs[i][0] : costs[i][1];
        }
        return sum;
    }
};