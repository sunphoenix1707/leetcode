class Solution {
public:
    bool isvalid(vector<int> &nums , long long mid)
    {
        vector<long long> arr(begin(nums) , end(nums));
        for(int i=0; i<nums.size()-1; i++)
        {
            if(arr[i] > mid) return false;
            long long b=mid-arr[i];
             arr[i+1] = arr[i+1]-b;
        }
        return arr[nums.size()-1] <= mid;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int max_elem=0;
        for(int i=0 ; i<nums.size() ;i++)
        {
            max_elem=max(max_elem,nums[i]);
        }
        
       int start=0 , end=max_elem ,ans;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(isvalid(nums,mid))  end=mid-1, ans=mid;
            else start=mid+1;
        }
        return ans;
    }
};