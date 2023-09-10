//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    public:
    vector<int> lps(string s) {
        int len=0;
        int n=s.size();
        vector<int>lps(n);
        lps[0]=0;
        int i=1; 
        while(i<n) {
            if(s[i]==s[len]) {
                len++;
                lps[i]=len;
                i++;
            }
            else {
                if(len!=0) {
                    len=lps[len-1];
                    
                
            }
            else {
                lps[i]=0;
                i++;
            }
        }
        }
        return lps;
    } 
public:
    int minChar(string str){
        string rev=str;
        reverse(rev.begin(),rev.end());
        string concat=str+"$"+rev;
        vector<int> ans=lps(concat);
        return (str.size()-ans.back());
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends