class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size() % k !=0) return false;
        sort(nums.begin() , nums.end());
        unordered_map<int,int> mp;
        for(auto c : nums) mp[c]++;
         for(auto e : nums) {
             if(mp[e] > 0) {
                 for(int i=0 ; i < k ; i++) {
                     int val = e + i;
                     if(mp[val]==0) return false;
                     mp[val]--;
                 }
             }
         }
        return true;
        
    }
};