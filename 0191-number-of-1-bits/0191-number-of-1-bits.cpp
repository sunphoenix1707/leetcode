class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n) {
            if(n&1) ans++; // n&1 gives 1 in case of 1 bit and gives 0 case of 0 bit
            n>>=1; //rightshift
        }
        return ans;
    }
};