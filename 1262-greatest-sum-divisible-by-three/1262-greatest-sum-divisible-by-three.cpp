class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum=0;
        priority_queue<int,vector<int>,greater<int>> pq1, pq2;
        for(int i=0 ; i<nums.size() ;i++)
        {
            sum += nums[i];
            if(nums[i] % 3 ==1) pq1.push(nums[i]);
            if(nums[i]%3 == 2) pq2.push(nums[i]);
            
        }
        if(sum % 3 == 1) {
           int sum1=0, sum2=0;
            if(pq1.size() > 0)   {  sum1 = sum - pq1.top(); pq1.pop(); }
            if(pq2.size() >= 2)   {
                sum2 = sum - pq2.top();
                pq2.pop();
                sum2 = sum2 - pq2.top();
            }
            return max(sum1, sum2);
        
        }
        else if(sum % 3 == 2) {
          int sum1 = 0, sum2 =0; 
            if(pq2.size() > 0) {
                sum1 = sum - pq2.top();
                pq2.pop();
            }
            if(pq1.size() >= 2) {
                sum2 = sum - pq1.top();
                pq1.pop();
                sum2 = sum2 - pq1.top();
            }
            return max(sum1 , sum2);
        }
        return sum;
    }
};