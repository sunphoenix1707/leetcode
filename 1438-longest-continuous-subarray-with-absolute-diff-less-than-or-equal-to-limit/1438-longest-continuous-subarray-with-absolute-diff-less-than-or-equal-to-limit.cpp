class Solution {
public:
    int longestSubarray(vector<int>& arr, int limit) {
       //basically only two pointer would be really cumbersome to solve as we our maximum and minimum element are keep on updating while incrementing our pointers
       //so here we are using maximum and minimum heap to keep track of maximum element in updated pointers as well as minimum elements
       int n=arr.size();
       int i=0,j=0;
       int len=0;
       priority_queue<pair<int,int>>maxh;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
       while(j<n) {
          maxh.push({arr[j],j});
          minh.push({arr[j],j});
          while(maxh.top().second < i) 
          maxh.pop();
           while(minh.top().second < i)
           minh.pop();
           if(maxh.top().first - minh.top().first<=limit) {
               len=max(len,j-i+1);
               j++;
           }
           else {
               i++;
               j++;
           }
       }
    return len;
    }
};