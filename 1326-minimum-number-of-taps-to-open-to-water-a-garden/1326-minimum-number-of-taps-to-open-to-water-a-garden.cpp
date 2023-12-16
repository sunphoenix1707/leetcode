class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
       vector<int> v(n+1,0);
        for(int i=0;i<ranges.size(); i++) 
        {
            int start = max(0, i-ranges[i]);
            int end= min(n,i+ranges[i]);
            v[start] = max(v[start],end);
            
        }
        int maxval=0,curr=0,tap=0;
        for(int i=0; i<=n ;i++)
        {
            
            if(i>maxval) return -1;
            if(i>curr) {
                curr=maxval;
                cout<<curr<<endl;
                tap++;
            }
           
             maxval = max(maxval,v[i]);
        }
        return tap;
    } 
};