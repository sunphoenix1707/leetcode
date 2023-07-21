class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int B) {
        // int n=matrix.size();
        // int m=matrix[0].size();
        // int lo=0;
        // int hi=(n*m)-1;
        // while(lo<=hi) {
        //     int mid=lo+(hi-lo)/2;
        //     if(matrix[mid/m][mid%m]==target) return true;
        //     else if(matrix[mid/m][mid%m] < target)
        //        lo=mid+1;
        //        else 
        //        hi=mid-1;
        // }
        // return false;
         int s=0,e=A.size()-1;
    int idx=0;
    while(s<=e)
    {
        int m=s+(e-s)/2;
        if(A[m][0]==B)
        return 1;
        if(A[m][0]<B)
        {
            idx=m;
            s=m+1;
        }
        else
        e=m-1;
    }
    //after getting the appropriate column apply binary search on that row simply 
    return binary_search(A[idx].begin(),A[idx].end(),B);
    }
};