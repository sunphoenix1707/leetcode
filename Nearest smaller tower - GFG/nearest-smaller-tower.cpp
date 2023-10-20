//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
       vector<int> nr(vector<int>& arr) {
           stack<int> st;
           st.push(0);
           int n=arr.size();
           vector<int> nextright(n,-1);
           for(int i=1;i<n;i++) {
               while(st.size() && arr[ st.top()] > arr[i]) {
                nextright[st.top()]=i;
                st.pop();
               }
               st.push(i);
           }
           return nextright;
       }
       vector<int> nl(vector<int> &arr) {
           stack<int> st;
           int n=arr.size();
           st.push(n-1);
           vector<int> nextleft(n,-1);
           for(int i=n-2;i>=0;i--) {
               while(st.size() && arr[ st.top()] > arr[i]) {
                nextleft[st.top()]=i;
                st.pop();
               }
               st.push(i);
           }
           return nextleft;
       }
       
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        vector<int> a1=nr(arr);
        vector<int> a2=nl(arr);
        int n=arr.size();
        vector<int> ans(n); 
        for(int i=0;i<n;i++) {
            if (a1[i]!=-1 && a2[i]!=-1){
            if(a1[i]-i<i-a2[i]) 
                ans[i]=a1[i];
            
            else if(a1[i]-i==i-a2[i]) {
                //if distance is same we will look for smaller value
                if(arr[a1[i]] < arr[a2[i]]) 
                ans[i]=a1[i];
                else 
                ans[i]=a2[i];
            }
             else ans[i]=a2[i];
            }
            else 
                //condition when any one of them is -1 then max value index choosen
                ans[i]=max(a1[i],a2[i]);
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends