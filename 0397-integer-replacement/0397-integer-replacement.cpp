class Solution {
public:
    int integerReplacement(int n) {
       long ans=0,num=n;
        while(num>1) {
            if(num & 1) {
                if(num==3) return ans+=2;
             if((num+1)/2 % 2==0) num++;
                else num--;
              
            }
            else num=num/2;
          
            ans++;
        }
        return ans;
    }
};