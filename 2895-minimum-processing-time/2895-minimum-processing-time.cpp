class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.rbegin(),processorTime.rend());
        sort(tasks.begin(),tasks.end());
        int ans=INT_MIN;
        int n=tasks.size();
        int j=0;
        for(int i=0;i<processorTime.size();i++) {
            int c=0;
            while(c<4) {
                ans=max(ans,processorTime[i]+tasks[j]);
                cout<<processorTime[i]<<" "<<tasks[j]<<" "<<ans<<endl;
                j++;
                c++;
                if(j==n) break;
            }
             if(j==n) break;
        }
         return ans;
    }
};