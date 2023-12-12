class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=-1,sec_maxi=-1;
        for(auto c:nums)
        {
            if(c>maxi) {
                 sec_maxi=maxi;
                maxi=max(maxi,c);
                    }
             else if(c>sec_maxi && sec_maxi!=maxi)   
             {
                 sec_maxi=c;
             }
        }
        return (maxi-1)*(sec_maxi-1);
    }
};