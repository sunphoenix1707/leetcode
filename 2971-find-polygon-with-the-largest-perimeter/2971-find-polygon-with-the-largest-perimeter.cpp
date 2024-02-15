class Solution {
public:
   long long largestPerimeter(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    // Sorted vector: [1, 1, 2, 3, 5, 12, 50]

    vector<long long> preffix(nums.size());
    preffix[0] = nums[0];

    // Calculating the prefix sum
    for (int i = 1; i < nums.size(); i++) {
        preffix[i] = preffix[i - 1] + nums[i];
        cout << preffix[i] << endl;
    }

    long long ans = -1;

    // Checking for the largest perimeter
    for (int i = nums.size() - 1; i >= 0; i--) {
        if ((i > 0) && preffix[i - 1] > nums[i]) {
            {
                ans = preffix[i];
                break;
            }
        }
    }

    return ans;
}

};