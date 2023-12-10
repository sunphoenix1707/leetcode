class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int ans=0,s=0,e=tokens.size()-1;
        while(s<=e)
        {
            if(tokens[s] <= power) power-=tokens[s++],ans++;
            else {
                if(s==e) break;
                if(ans==0) return 0;
                else 
                    power+=tokens[e--], ans--;
                
                 }
        }
        return ans;
    }
};