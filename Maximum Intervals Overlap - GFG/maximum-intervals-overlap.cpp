//{ Driver Code Starts
// Program to find maximum guest at any time in a party
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> findMaxGuests(int a[], int b[], int n)
	{
	  sort(a,a+n);
	  sort(b,b+n);
	  int c=1,max_c=1;
	  
	  int ans=a[0];
	  int s=1,e=0;
	  while(s<n && e<n) {
	      if(a[s]<=b[e]) {
	          c++;
	          s++;
	      }
	      else {
	          c--;
	          e++;
	      }
	      if(c>max_c) {
	          max_c=c;
	          ans=a[s-1];
	      }
	  }
	  return {max_c,ans};
	  
	}

};

//{ Driver Code Starts.

 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int entry[n],exit1[n];
        for(i=0;i<n;i++)
        cin>>entry[i];
        for(i=0;i<n;i++)
        cin>>exit1[i];
        Solution obj;

	    vector<int> p = obj.findMaxGuests(entry, exit1, n);
	    cout<<p[0]<<' '<<p[1];
	    cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends