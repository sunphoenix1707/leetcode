class Solution {
public:
    int candy(vector<int>& rt) {
        vector<int>L2R(rt.size(),1), R2L(rt.size(),1);
        for(int i=1; i<rt.size(); i++)
        {
            if(rt[i]>rt[i-1]) L2R[i]=L2R[i]=L2R[i-1]+1;
        }
        
        for(int i=rt.size()-2; i>=0 ;i--)
        {
            if(rt[i]>rt[i+1]) R2L[i]=R2L[i]=R2L[i+1]+1;
        }
        int candies=0;
        for(int i=0 ; i<rt.size();i++)
            candies+=max(L2R[i],R2L[i]);
        return candies;
    }
};