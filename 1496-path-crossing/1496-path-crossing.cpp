class Solution {
public:
     bool isPathCrossing(string path) {
       unordered_set<string> s;
         s.insert("0,0");
         int x=0, y=0;
         for(char a: path) {
             a=='N' ? y++ : a=='E' ? x++ : a=='S' ? y-- : x--;
             if(s.find(to_string(x) + "," + to_string(y)) != s.end()) return true;
               s.insert(to_string(x) + "," + to_string(y));
         }
         return false;
    }
};