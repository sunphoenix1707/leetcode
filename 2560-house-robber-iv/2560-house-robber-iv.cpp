class Solution {
    bool possible(int mid,vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]<=mid) {
                c++;
                i++;
            }
        }
        if(c>=k) return true;
        else return false;
    }
public:
    int minCapability(vector<int>& nums, int k) {
        int l=0;
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++) {
            if(nums[i]>maxi)
            maxi=nums[i];
        }
        int h=maxi;
        while(l<h) {
            int mid=l+(h-l)/2;
            if(possible(mid,nums,k)) {
             h=mid;
            }
            else l=mid+1;
        }
        return l;
    }
};