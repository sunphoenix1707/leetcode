class Solution {
public:
   
    int minimumOperations(vector<int>& nums) {

        map<int,int> mp;
        for(auto i: nums)
        {
           if(i!=0) mp[i]++;
        }
       return mp.size();
    }
};