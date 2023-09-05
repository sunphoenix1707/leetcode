class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int res=0;
        while(i<j) {
            if(nums[i]+nums[j] < target) {
               res+=j-i;
                i++;
                
            }
            else {
                j--;
            }
        }
        return res;
    }
};