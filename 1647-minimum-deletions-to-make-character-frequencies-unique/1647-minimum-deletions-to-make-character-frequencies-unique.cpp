class Solution {
public:
    int minDeletions(string s) {
    unordered_map<char,int>mp;
        for(auto c:s) {
            mp[c]++;
        }
        vector<int> freq;
        unordered_set<int> set; 
        int ans=0;
        for(auto p: mp) {
            int temp=p.second;
            while(set.find(temp)!=set.end() && temp!=0) {
                ans++;
                temp--;
            }
           set.insert(temp);
        }
       return ans;
    }
};
//
// "bbcebab" temp!=0 condition we are using why
// b=4
//     c=1
//       e=1  
//          a=1
    