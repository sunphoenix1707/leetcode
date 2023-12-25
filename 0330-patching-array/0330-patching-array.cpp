class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int count = 0,i=0;
        long reach=0;
        int size = nums.size();
        while(reach < n) {
            if(i < size && nums[i] <= reach+1) {
                reach += nums[i];
                i++;
            }
            else if(i >= size) {
                reach += reach+1;
                count++;
            }
            else {
                reach += reach+1;
                count++;
            }
        }
        return count;
    }
};