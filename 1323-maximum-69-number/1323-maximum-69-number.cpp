class Solution {
public:
    int maximum69Number (int num) {
       vector<int> ans;
        int n=num;
        while(n) {
            int digit=n%10;
            ans.push_back(digit);
            n=n/10;      
        }
        reverse(ans.begin(),ans.end());
        int maxi=INT_MIN;
        for(int i=0;i<ans.size();i++) {
            if(ans[i]==6)   {
                ans[i]=9;  
                break;
        }
        }
        int sum=0;
        for(int i=0;i<ans.size();i++) {
            sum=sum*10+ans[i];
        }
        return sum;
    }
};