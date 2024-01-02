class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> mp;
        for(auto s: words) {
            for(auto c: s) 
                mp[c]++;
        }
        for(auto i : mp) {
            if(i.second % words.size() != 0) return false;
        }
        return true;
    }
};