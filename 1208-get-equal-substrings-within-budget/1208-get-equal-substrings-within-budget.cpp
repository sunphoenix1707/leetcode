class Solution {
public:
   int equalSubstring(string s, string t, int maxcost) {
    int i = 0, j = 0;
    int n = s.size();
    int ans = 0;
    int cost = 0;

    for (i = 0; i < n; i++) {
        cost += abs(s[i] - t[i]);

        // If the cost exceeds maxcost, move the left pointer j
        while (cost > maxcost) {
            cost -= abs(s[j] - t[j]);
            j++;
        }

        // Update the maximum substring length found so far
        ans = max(ans, i - j + 1);
    }

    return ans;
}
};