class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n=nums.size();
        int p=pattern.size();
        int ans=0;
        for(int i=0;i<n-p;i++) {
            bool flag=true;
            int k=i;
            for(int j=0;j<p;j++,k++) {
                if(pattern[j]==1 && nums[k] < nums[k+1]) continue;
                else if(pattern[j]==0 && nums[k]==nums[k+1]) continue;
                else if(pattern[j]==-1 && nums[k]>nums[k+1]) continue;
                else {
                    flag=false;
                    break;
                }
            }
            
            if(flag==true) ans++;
        }
        return ans;
    }
};