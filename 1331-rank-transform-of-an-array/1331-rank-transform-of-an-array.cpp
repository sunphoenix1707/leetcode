class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        unordered_map<int,int> mp;
        // for(int i=0;i<arr.size();i++)  mp[arr[i]]=i;
        int len=0;
        sort(temp.begin(),temp.end());
        for(int i=0 ; i<temp.size();i++) {
            if(i==0)   {
                len++;
                mp[temp[i]]=len;
            }
            else if(temp[i]!=temp[i-1])
            {
                len++;
                mp[temp[i]]=len;
            }
        }
      vector<int> v(arr.size(), 0);
        for(int i=0;i<arr.size();i++) {
            if(mp.find(arr[i])!=mp.end())
                v[i]=mp[arr[i]];
        }
        return v;
    }
};