class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //sort based on index 2 of every pair of vector
        sort(intervals.begin(),intervals.end(),[&](vector<int> &v1,vector<int> &v2) {
            if(v1[1]<v2[1]) return true;
            return false;
        });
        int n=intervals.size();
        int cnt=1;
        int r=intervals[0][1];
        for(int i=1;i<n;i++) {
            if( intervals[i][0]>=r)  cnt++,  r=intervals[i][1];
          
        }
        cout<<cnt;
        return  n-cnt;
    }
    
};