class Solution {
public:
    void longestprefixsuffix(vector<int>&pattern , vector<int>&lps) {
        int m = pattern.size();
        int len=0;
        lps[0]=0;
        int i=1;
        while(i<m)
        {
            if(pattern[i]==pattern[len]) {
                len++;
                lps[i]=len;
                i++;
                
            }
            else {
           if(len!=0)  len=lps[len-1];
                else {
                    lps[i]=0;
                    i++;
                }
            
            }
        }
    
    }
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n=nums.size();
        int m=pattern.size();
        vector<int> a(n-1);
        for(int i=1;i<n;i++) {
            if(nums[i] > nums[i-1])  a[i-1]=1;
            else if(nums[i]==nums[i-1]) a[i-1]=0;
            else a[i-1]=-1;
        }
        vector<int> lps(m,0);
        longestprefixsuffix(pattern,lps);
        int i=0;
        int j=0;
        int result=0;
        while(i<a.size()) {
            if(pattern[j]==a[i]) {
                i++;
                j++;
            }
            if(j==pattern.size())  {
                result++;
                j=lps[j-1];
            }
            else if(i<a.size() && pattern[j]!=a[i]) {
                if(j!=0)  j=lps[j-1];
                else i++;
            }
        }
       return result; 
    }
};