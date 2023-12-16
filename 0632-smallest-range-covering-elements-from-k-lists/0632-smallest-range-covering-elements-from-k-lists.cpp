class Solution {
public:
    using arr= array<int,3> ;
    vector<int> smallestRange(vector<vector<int>>& nums) {
       priority_queue< arr,vector<arr> , greater<arr>> pq;
        int maxi= INT_MIN;
        for(int i=0 ; i<nums.size() ; i++)
        maxi= max(maxi , nums[i][0]) , pq.push({nums[i][0] , 0 ,i});
        int lo = -1e5, hi= 1e5;
        while(pq.size() == nums.size())
        {
            auto [mini, i ,j] = pq.top();  pq.pop();
            if(maxi-mini < hi - lo) lo=mini , hi=maxi;
            else if(maxi - mini == hi-lo && mini < lo)  lo=mini , hi=maxi;
            if(i+1 < nums[j].size())
                maxi = max(maxi , nums[j][i+1]) , pq.push({nums[j][i+1],i+1 ,j});
        }
        return {lo, hi};
    }
};