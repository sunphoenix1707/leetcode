class Solution {
public:
    int splitNum(int num) {
        vector<int> ans;
        int a=num;
        while(a) {
            int digit=a%10;
            ans.push_back(digit);
            a=a/10;
        }
         int sum=0;
        sort(ans.begin(),ans.end());
        int c=0,d=0;
       //suppose 2 3 4 5 6 7   246 and 357
        for(int i=0;i<ans.size();i+=2)
            c=c*10+ans[i];
        for(int i=1;i<ans.size();i+=2) 
            d=d*10+ans[i];
       return c+d;
    }
};