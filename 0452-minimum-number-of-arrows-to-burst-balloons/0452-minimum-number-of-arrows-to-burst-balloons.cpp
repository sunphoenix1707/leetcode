class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[&]( vector<int> &a1,vector<int> &a2) {
            if (a1[1]<a2[1]) return true;
            return false;
        });
        int l=points[0][1];
        int ans=1;
        for(int i=1;i<points.size();i++ ) {
            if(points[i][0] > l) {
                l=points[i][1];
                ans++;
            }
        }
        return ans;
    }
};