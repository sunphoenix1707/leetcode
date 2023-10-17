class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       vector<int> ans;
        for(auto c:asteroids) {
            if(c>0) ans.push_back(c);
            else {
                while(ans.size()>0 &&  ans.back()>0    && ans.back()<abs(c) )
                    ans.pop_back();
                 if(ans.size()==0 || ans.back()<0) 
                     ans.push_back(c);
                else if(ans.size() > 0 && ans.back()==abs(c))
                    ans.pop_back();
            }
        }
        return ans;
    }
};