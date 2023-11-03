class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
       sort(clips.begin(),clips.end(),[&](vector<int> v1,vector<int>v2){
           if(v1[0]<v2[0]) return true;
           if(v1[0]==v2[0] && v1[1]>v2[1])  return true;
           return false;
       });
        int ans=1;
        int l=clips[0][0];
        int r=clips[0][1];
           if (l!=0)return -1;
        for(int i=1;i<clips.size();i++) {
            int j=i;
            int newval=r;
            if(newval>=time) break;
            while(j<clips.size() && l<=clips[j][0] && clips[j][0]<=r) {
                newval=max(newval,clips[j][1]);
                j++;
            }
            if(newval!=r) {
                r=newval;
             cout<<r<<",";
                ans++;
            }
        }
        return r>=time?ans:-1;
    }
};