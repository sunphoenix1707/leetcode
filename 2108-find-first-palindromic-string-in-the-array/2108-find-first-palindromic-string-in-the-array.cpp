class Solution {
public:
    bool ispalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j) {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else {
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string temp="";
        for(int i=0; i<words.size(); i++)
        {
            if(ispalindrome(words[i]))
            {
                 temp=words[i];
                break;
            }
                
        }
        return temp;
    }
};