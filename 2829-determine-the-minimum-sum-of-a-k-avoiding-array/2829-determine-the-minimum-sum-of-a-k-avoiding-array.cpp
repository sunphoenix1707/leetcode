class Solution {
public:
    int minimumSum(int n, int k) {
        unordered_set<int> st;
        for(int i=1 ; i<k-i ;i++) {
            st.insert(k-i);
        }
        
        int num=1,sum=0;
        int i=0;
        while(i<n) {
            if(st.find(num)==st.end()) {
                sum+=num;
                i++;
            }
            num++;
        }
        return sum;
    }
};