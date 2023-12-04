class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> m;
        for(char c: chars) m[c]++;
        int ans=0;
       
        for(string s : words) {
            unordered_map<char,int> temp = m;
             int f=0;
            for(char c: s) {
                if(temp.find(c)!=temp.end()) {
                    temp[c]--;
                if(temp[c]==0) temp.erase(c);
                }
                else {
                    f=1;
                    break;
                }
                
            }
            if(!f) ans+=s.size();
        }
        return ans;
    }
};