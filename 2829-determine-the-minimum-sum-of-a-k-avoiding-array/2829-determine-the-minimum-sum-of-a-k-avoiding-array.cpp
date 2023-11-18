class Solution {
public:
    int minimumSum(int n, int k) {
        int num=1,sum=0;
       for(int i=0;i<n;i++) {
           if(num>=k) {
               sum+=num++;
           }
           else if(k-num<num) {
               num++;
               i--;
           }
           else {
               sum+=num++;
           }
       }
        return sum;
    }
};