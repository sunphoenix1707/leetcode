class Solution {
public:
    int numberOfMatches(int n) {
        int a=n,sum=0,b=n;
        while(a>1) {
            if(a%2!=0) {
                  b=(a-1)/2;
                a=((a-1)/2) + 1;
            
              
                sum+=b;
            }
            else {
                a=a/2;
                sum+=a;
              
            }
        }
        return sum;
    }
};