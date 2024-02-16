class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>> res;
        set<string> food_name;
        for(auto it: orders) food_name.insert(it[2]);
        unordered_map<string,int>fmap;
        int i=0;
        for(auto it: food_name) {
            fmap[it]=i;
            i++;
        }
        map<int,vector<int>> mp;
        vector<int> food_freq(food_name.size(),0);
        for(int i=0; i<orders.size();i++)
        {
            int num = stoi(orders[i][1]);
            if(mp.find(num)==mp.end())
                mp[num]=food_freq;
              mp[num][fmap[orders[i][2]]]++;
               
        }
        res.push_back({"Table"});
        res.back().insert(res.back().end(),food_name.begin(),food_name.end());
        for(auto it:mp)
        {
            res.push_back({to_string(it.first)});
            for(auto c:it.second) 
                res.back().insert(res.back().end(),to_string(c));
        }
        return res;
    }
};