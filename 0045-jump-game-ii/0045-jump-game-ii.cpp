class Solution {
public:
    int jump(vector<int>& nums) {
       //2 3 1 1 4
        int curr=0;
        int farthest=0;
        int maxif=0;
        int jumps=0;
        for(int i=0;i<nums.size()-1;i++) {
            farthest=max(farthest,nums[i]+i);
            //farthest=max(0,2) 
            if(curr==i) {
                curr=farthest;
                jumps++;
                //jump=1
            }
        }
        return jumps;
    }
};