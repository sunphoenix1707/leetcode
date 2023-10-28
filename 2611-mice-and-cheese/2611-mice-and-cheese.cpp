class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        //approach is very simply mouse 1 will firstly eat all greator values then remaining would be eaten by mouse 2
        // we calc difference in order to achieve the max score
        //if difference is higher it means reward 1 is higher than 2 so we will choose reward1
         int n=reward1.size();
        vector<pair<int,int>> v(n);
       
        for(int i=0;i<n;i++) v[i]={reward1[i]-reward2[i],i};
        
        sort(v.rbegin(),v.rend());
        int ans=0;
         for(int i=0;i<k;i++) {
              ans+=reward1[v[i].second];
               reward2[v[i].second]=0;
         }
        for(auto x:reward2) {
            ans+=x;
        }
        return ans;
    }
};