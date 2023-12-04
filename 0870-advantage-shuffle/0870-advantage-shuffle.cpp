class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        vector<pair<int,int>> p;
        for(int i=0; i<nums2.size() ; i++) p.push_back({nums2[i], i});
        sort(nums1.begin(),nums1.end());
        sort(p.begin() , p.end() , greater<pair<int,int>>());
        int s=0 , e=nums1.size()-1;
        vector<int> ans(nums1.size());
        for(auto i: p) {
            ans[i.second] = (nums1[e] <= i.first) ? nums1[s++] : nums1[e--];
        }
        return ans;
    }
};