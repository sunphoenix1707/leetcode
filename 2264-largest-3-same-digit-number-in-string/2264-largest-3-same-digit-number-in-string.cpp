class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
          char v=0;
        for(int i=2;i<num.length();i++) {
          
            if(num[i-1] == num[i] && num[i-2] ==  num[i]) {
               v=max(v,num[i]);
            }
        }
        return v==0 ? ans : string(3,v);
    }
};