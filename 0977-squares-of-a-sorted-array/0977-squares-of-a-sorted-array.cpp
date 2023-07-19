class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0;i<n;i++) {
        //     if(nums[i]<0) 
        //     nums[i]=-nums[i];
        // }
        // sort(nums.begin(),nums.end());
        //  vector<int>ans;
        //  for(int i=0;i<n;i++) {
        //  int val=nums[i];
        //  int a=(val*val);
        //  ans.push_back(a);
        //  }
        //  return ans;
        vector<int> res;
        int i=0;
        int j=nums.size()-1;
        while(i<=j) {
        int num1 = nums[i]*nums[i];
        int num2=nums[j]*nums[j];
            if(num1>num2) {
                res.insert(res.begin(),num1);
                i++;
            }
            else {
                res.insert(res.begin(),num2);
                j--;
            }
        }
       return res;
    }
};