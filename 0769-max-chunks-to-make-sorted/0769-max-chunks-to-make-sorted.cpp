
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int> st;
        for (int i = 0; i < arr.size(); ++i) {
            if (st.empty() || arr[i] >= st.top()) {
                st.push(arr[i]);
            } else {
                int currMax = st.top();
                st.pop();
                while (!st.empty() && st.top() > arr[i]) {
                    st.pop();
                }
                st.push(currMax);
            }
        }
        return st.size();
    }
};

