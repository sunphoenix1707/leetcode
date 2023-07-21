class Solution {
    long long int timefnc(int mid,vector<int>& piles,int h) {
        long long int sum=0;
        long long int hours=0;
         for(int i=0;i<piles.size();i++){
                if(piles[i]%mid==0)
                hours+=piles[i]/mid;
                else
                hours+=(piles[i]/mid)+1;
            }
           return hours;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low=1;
        long long high=*max_element(piles.begin(),piles.end());
        int ans=-1;
        while(low<=high) {
            long long mid=low+(high-low)/2;
            long long  time=timefnc(mid,piles,h);
            if(time<=h) {
                high=mid-1;
                ans=mid;
            }
            else {
                low=mid+1;
            }
        }
        return ans;
    }
};