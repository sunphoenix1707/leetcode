class Solution {
public:

  int findUnsortedSubarray(vector<int>& nums) {
   
      int n=nums.size();
         vector<int> l(n),r(n);
      int maxi=-1e9,mini=1e9;
      for(int i=0;i<n;i++) {
          maxi=max(maxi,nums[i]);
          l[i]=maxi;
          mini=min(mini,nums[n-i-1]);
          r[n-i-1]=mini;
      }
      int s=-1,e=-1;
      for(int i=0;i<n;i++) {
          if(l[i] > r[i] && s==-1) s=i;
          if(l[n-i-1] > r[n-i-1] && e==-1) e=n-i-1;
      }
     return s==-1 ? 0 : e-s+1;
}

    
};