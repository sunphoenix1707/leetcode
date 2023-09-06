//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
  long long count(int n,vector<int> &A,long long x) {
      long long ans=0;
      long long sum=0;
     
      for(long long l=0,r=0;r<n;r++) {
          sum+=A[r];
          while(sum>x) {
              sum-=A[l];
              l++;
          }
          
          
          ans+=r-l+1;
      }
      return ans;
  }
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
        long long ans1=0;
        long long ans2=0;
        ans1=count(N,A,L-1);
        ans2=count(N,A,R);
        return ans2-ans1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        long long L,R;
        cin>>N>>L>>R;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,L,R);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends