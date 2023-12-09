class Solution {
public:

  int findUnsortedSubarray(vector<int>& nums) {
    vector<int> ans = nums;
    sort(ans.begin(), ans.end());
    int start = -1, end = -1;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] != nums[i]) {
            if (start == -1) {
                start = i;
            }
            end = i;
        }
    }
    return (start == -1) ? 0 : end - start + 1;
}

    
};