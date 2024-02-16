class Solution {
public:
    string frequencySort(string s) {
        unordered_map<int,int> mp;
         for(int i=0;i<s.size();i++) {
             mp[s[i]]++;
         }
        
        multimap<int,int>mm;
        for(auto it:mp) {
            mm.insert({it.second,it.first});
        }
        string temp="";
        for(auto it=mm.begin(); it!=mm.end(); it++) {
            int count = it->first;
            count--;
            temp+=it->second;
            while(count) {
                temp+=it->second;
                count--;
            }
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};