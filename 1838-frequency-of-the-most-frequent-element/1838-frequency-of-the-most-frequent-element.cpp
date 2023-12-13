class Solution {
public:
    //Approach 1 : using binary search and preffix sum
    int b_search(int target_idx, int k , vector<int> &nums, vector<long> &preffix)
    {
        int target = nums[target_idx];
        int l = 0;
        int r = target_idx;
        int best =  target_idx;
        while(l <= r)
        {
            int mid = l+(r-l)/2;
            long count = target_idx-mid+1;
            long windowsum = count*target;
            long cursum= preffix[target_idx] - preffix[mid]+nums[mid];
            int ops = windowsum-cursum;
            if(ops > k) {
                l=mid+1;
            }
            else {
                best=mid;
                r=mid-1;
            }
        }
        return target_idx-best+1;
    }
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<long> preffix(n);
        preffix[0]=nums[0];
        for(int i=1 ; i<nums.size() ;i++)
        {
            preffix[i] = preffix[i-1] + nums[i];
        }
        int ans = 0;
        for(int i=0 ; i<n ;i++)
        {
            ans= max(ans, b_search(i,k,nums,preffix));
        }
        return ans;
    }
};