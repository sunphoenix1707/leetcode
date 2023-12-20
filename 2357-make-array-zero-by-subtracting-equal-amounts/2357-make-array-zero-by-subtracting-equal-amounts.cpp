class Solution {
public:
    //time complexity-0(n2)
    int minimumOperations(vector<int>& nums) {
       sort(nums.begin(),nums.end()); 
        int a = 0 , c = 0 , j;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>0)  {
                
                a = nums[i];
                c++;
            for( j=i; j<nums.size(); j++)
                nums[j]-=a;
              }
        }
       return c;
       
    }
};