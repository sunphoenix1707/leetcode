class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> v{1,1};
        int ans=0;
        int a=1, b=1;
        while(1) {
            if(a+b > k) break;
             v.push_back(a+b);
              a=b;
               b=v.back();
        }
        for(int i = v.size()-1 ; i>=0 ;i--)
        {
            if(v[i] <= k) {
                ans++;
                k-=v[i];
            }
            
        }
        return ans;
    }
};