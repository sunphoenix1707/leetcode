class Solution {
public:
    int reductionOperations(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        //first simply do reverse sorting [3,2,2,1,1]
        int c=0,sum=0;
        for(int i=1;i<nums.size();i++) {
            if(nums[i]!=nums[i-1]) c++; 
            //3!=2 c=1 
             sum+=c;
            //ans=1+2+
        }
        return sum;
    }
};