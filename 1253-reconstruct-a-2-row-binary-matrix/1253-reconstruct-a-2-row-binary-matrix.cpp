class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        vector<int> u,l;
        vector<vector<int>> ans;
        for(auto c : colsum) {
            if(c==2) {
                u.push_back(1);
                l.push_back(1);
                upper--,lower--;
            }
            else if(c==0) {
                u.push_back(0);
                l.push_back(0);
            }
            else if(c==1) {
                if(upper > lower) {
                u.push_back(1);
                l.push_back(0);
                    upper--;
                }
                else {
                       u.push_back(0);
                       l.push_back(1);
                    lower--;
                }
            }
        }
        if(upper == 0 && lower==0) {
            ans.push_back(u);
            ans.push_back(l);
        }
        return ans;
    }
};