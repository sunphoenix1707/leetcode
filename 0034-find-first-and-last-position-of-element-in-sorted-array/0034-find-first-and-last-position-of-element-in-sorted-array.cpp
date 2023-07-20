class Solution {
    int search(vector<int>& nums,int n,int target) {
        int l=0;
        int h=n-1;
        int res=-1;
        while(l<=h) {
            int mid=l+(h-l)/2;
            if(nums[mid]==target) {
                res=mid;
                h=mid-1;
            }
            else if(nums[mid]<target) l=mid+1;
            else h=mid-1;
        }
        return res;
    }
     int searching(vector<int>& nums,int n,int target) {
        int l=0;
        int h=n-1;
        int res=-1;
        while(l<=h) {
            int mid=l+(h-l)/2;
            if(nums[mid]==target) {
                res=mid;
                l=mid+1;
            }
            else if(nums[mid]<target) l=mid+1;
            else h=mid-1;
        }
        return res;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=search(nums,nums.size(),target);
        int b=searching(nums,nums.size(),target);
        return {a,b};
    }
};