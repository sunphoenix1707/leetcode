class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int c=-1 , p=-1 ,i;
        int n=arr.size();
        for( i=n-2 ; i>=0 ; i--) {
            if(arr[i] > arr[i+1]) break;
        }
        if(i == -1) return arr;
        for(int j=i+1; j<n;j++) {
            if(arr[j] > c && arr[j] < arr[i])   c=arr[j] ,p=j;
        }
        swap(arr[p],arr[i]);
        return arr;
    }
};