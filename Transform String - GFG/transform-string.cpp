//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {    int n=A.size();
         int m=B.size();
         if(n!=m) return -1;
        unordered_map<char,int>mp;
       for(int i=0;i<n;i++) {
           mp[A[i]]++;
           mp[B[i]]--;
       }
       for(auto it:mp) {
           if(it.second>0) 
               return -1;
           
       }
       int j=m-1;
       int i=n-1;
       int cnt=0;
      while(i>=0 && j>=0) {
          if(A[i]==B[j]) {
              i--;
              j--;
          }
          else {
              i--;
              cnt++;
          }
      }
        return cnt;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends