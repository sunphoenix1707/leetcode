class Solution {
public:
    int minOperations(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        map<int,int>temp;
        int cnt=0;

        for(auto it:nums){
            temp[it]++;
        }
        for(auto it: temp){
            if(it.second == 1){
                return -1;
            }
            int t=it.second;
            if(t%3==0){
                int r=t/3;
                cnt+=r;
            }
            else{
                int r=t/3;
                cnt=cnt+r+1;
            }

        }
        return cnt;
        
    }
};