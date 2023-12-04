class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] < 0 && k) {
                nums[i]*=-1;
                k--;
                continue;
            }
            break;
        }
        sort(nums.begin(),nums.end());
        //we will sort and apply substraction to the lowest element in the array to get the maximum sum. 
        if(k!=0 && k%2!=0) {
            nums[0]*=-1;
            //we are check for odd condition for k because for even k turns out positive for positive number 
        }
       for(auto c: nums) {
           sum+=c;
       }
        return sum;
    }
};