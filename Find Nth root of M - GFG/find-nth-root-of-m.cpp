//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// bool lessthanequal(int mid,int n,int m) {
//   double res=1;
//   //to calculate nth power i am using naive way
//   for(int i=1;i<=n;i++) {
//           res*=mid;
//           if(res>m) return false;
//   }
//   return true;
// }
// int NthRoot(int n, int m) {
//   //  we are taking double, it can be in decimal
//   double l=1,r=m;
//   while(r-l > (1e-8))
//   //if it wont pass some of test cases so taken 1e
//   {   double mid=(l+r)/2;
//       if(lessthanequal(mid,n,m)) {
//          l=mid;
//       }
//       else {
//          r=mid;
//       }

//   }
// return l;


 

class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    //
	    int start = 1, end = m;
	    //
	    while(start <= end){
	        
	        int mid = start + (end - start)/2;
	        //
	        if(pow(mid, n) == m) return mid;
	        //
	        if(pow(mid, n) < m) start = mid + 1;
	        else end = mid - 1;
	    }
	    //
	    return -1;
	}  
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends