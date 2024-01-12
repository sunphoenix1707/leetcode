class Solution {
public:
   
        bool halvesAreAlike(string s) {
        int cnt = 0;
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        for(int i=0; i<s.size(); i++) {
            if(i < s.size() / 2) {
                if(st.find(s[i]) != st.end()) cnt++;
            }
            else {
                if(st.find(s[i]) != st.end()) cnt--;
            }
        }
        return !cnt;
    
    }
};