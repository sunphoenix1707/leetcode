class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string s="";
        while(a && b) {
       if(a>b) {
           s+="aab";
           a-=2;
           b-=1;
       }
    else if(a<b) {
        s+="bba";
        b-=2;
        a-=1;
    }
       else {
           s+="ab";
           a-=1;
           b-=1;
         } 
        
        
        }
        
        while(a) {
            s+="a";
            a--;
        }
        while(b) {
            s+="b";
            b--;
        }
        return s;
    }
};