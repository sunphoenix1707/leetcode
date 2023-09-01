class Solution {
public:
    void moveZeroes(vector<int>& a) {
       // 0,1,0,3,12
        int n=a.size();
        int i=0,j=0;
        while(i<n && j<n) {
            if(a[j] != 0) {
                swap(a[i],a[j]);
                i++;
                j++;
            }
            else j++;
        }
         
    }
};