class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0 , count_neg =0, mn=INT_MAX;
        for(auto c : matrix) {
            for(auto s : c) {
                mn = min(mn , (long long) abs(s));
                if(s < 0)  count_neg++;
                sum += abs(s);
            }
        }
        if(count_neg %2 ==0) return sum;
        return sum-2*mn;
    }
};