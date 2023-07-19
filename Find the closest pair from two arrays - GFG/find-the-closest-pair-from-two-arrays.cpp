//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++


       class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
       //code here
       vector<int> ans;
       ans.push_back(-1);
       ans.push_back(-1);
       int a,b,i,j=m-1;
       i=0;
       int sum;
       int diff,mindiff=INT_MAX;
       while(i<n && j>=0)
       {
           
           a=arr[i];
           b=brr[j];
           sum=a+b;
           if(sum>x)
           {
               diff=sum-x;
               j--;
           }
           else if(sum<x)
           {
               diff=x-sum;
               i++;
           }
           else
           {
               ans[0]=a;
               ans[1]=b;
               return ans;
           }
           if(diff<=mindiff)
           {
               
               if(diff!=mindiff)
               {
                   ans[0]=a;
                   ans[1]=b;
               }
               mindiff=diff;
                   
           }
           
           
       }
       return ans;
   }
};      
           
            
        
      
     
    



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends