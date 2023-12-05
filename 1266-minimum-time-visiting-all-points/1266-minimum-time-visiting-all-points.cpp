class Solution {
public:
    //Approch is very simple we are calculating the distance, we are calculating maximum distance  [[1,1],[3,4],[-1,0]] => max(3-1,4-1) max(-1-3,0-4) we are calculating abs values and also adding
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        for(int i=1;i<points.size();i++) {
            ans+= max(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1]));
        }
        return ans;
    }
};