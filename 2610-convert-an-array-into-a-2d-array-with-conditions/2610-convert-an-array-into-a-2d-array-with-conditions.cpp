class Solution {
public:
     vector<vector<int>> findMatrix(vector<int>& nums) {
       unordered_map<int,int> mp;
         for(auto i: nums) mp[i]++;
         vector<vector<int>> res;
         while(mp.size()) 
         {    vector<int> p;
             for(auto i: mp)  p.push_back(i.first);
             for(auto i: p)   
                 if(!--mp[i])  mp.erase(i);
              res.push_back(p);
         }
         return res;
    }
};