class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int n=nums.size();
        int b=0;
       for(int i=0;i<n;i+=2) {
            int a=nums[i];
             b=nums[i+1];
           cout<<a<<endl;
           cout<<b;
            ans+=min(a,b);
            
        }
        return ans;
    }
};