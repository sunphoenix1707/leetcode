class Solution {
public:
    //there always exists an answer
    //Firstly will place the element with greator count so that no adjacent will be equal
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int,int>map;
        for(auto c:barcodes) map[c]++;
        vector<pair<int,int>> v;
        for(auto c: map) {
            v.push_back({c.second,c.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        vector<int> ans(barcodes.size()),temp;
        for(auto val : v) {
            for(int i=0; i< val.first;i++) temp.push_back(val.second);
        }
        int k=0;
        for(int i=0;i< barcodes.size();i+=2) ans[i]=temp[k++];
        for(int i=1;i<barcodes.size();i+=2)  ans[i]=temp[k++];
     return ans;
   
    }
};