//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
       vector<vector<string>>ans;
       // i took unordered map which has string as key here i will sort this key string and
       //i will be having vector of string as value
       unordered_map<string,vector<string>>mp;
       for(int i=0;i<string_list.size();i++) {
           string word=string_list[i];
           sort(word.begin(),word.end());
           mp[word].push_back(string_list[i]);
       }
       for(auto i:mp) {
           ans.push_back(i.second);
           
       }
       return ans;
       //lets take example: 
       //act,god,cat,dog,tac
       //act -> sort -> act
       //map - act->act,cat,tac
       //dgo->god,dog
       
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends