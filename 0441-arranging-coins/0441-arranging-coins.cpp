class Solution {
    bool possible(long long mid,int n) {
            long long k=(mid*(mid+1)/2);
            if(k<=n) return true;
            else return false;
    }
public:
    int arrangeCoins(int n) {
        //by using binary search
        int l=0;
        int h=n;
        while(l<=h) {
            long long mid=(l+h)/2;
            if(possible(mid,n)) {
                l=mid+1;
            }
            else {
                h=mid-1;
            }
        }
        return l-1;
    }
};