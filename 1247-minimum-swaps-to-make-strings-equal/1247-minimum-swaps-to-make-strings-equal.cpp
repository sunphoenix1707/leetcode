class Solution {
public:
//     s1 =  xx s2 = yy
//     swap  => s1[0] with s2[1]
//     =>       yx==yx 
//     => Here s1[0] = x  xy++;
//              s1[1] = x    xy++;
//     => xy count=2 hence we need only 1 swap
        
        
//         case 2:
//     s1 = "xy", s2 = "yx"
//         here s1[0] == x  xy++;  xy=1
//         here s1[1]==y    yx++;   yx=1
//         we need 2 swaps 
        
    int minimumSwap(string s1, string s2) {
        int xy=0;
        int yx=0;
        for(int i=0;i<s1.size();i++) {
            if(s1[i]=='x' && s2[i]=='y') xy++;
            else if(s1[i]=='y' && s2[i]=='x') yx++;
        }
        return (xy+yx)%2 ? -1 : xy/2 + yx/2 + xy%2 + yx%2;
    }
};