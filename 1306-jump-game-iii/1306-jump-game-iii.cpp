class Solution {
public:
  bool help(vector<int> &arr, int start, vector<int> &vis, int n) {
    if (start < 0 || start >= n || vis[start]) {
        return false;
    }

    vis[start] = true;

    if (arr[start] == 0) {
        return true;
    }

    bool a = false, b = false;

    if (start + arr[start] < n) {
        a = help(arr, start + arr[start], vis, n);
    }

    if (start - arr[start] >= 0) {
        b = help(arr, start - arr[start], vis, n);
    }

    return a || b;
}

bool canReach(vector<int> &arr, int start) {
    vector<int> vis(arr.size(), 0);
    int n = arr.size();
    return help(arr, start, vis, n);
}
};