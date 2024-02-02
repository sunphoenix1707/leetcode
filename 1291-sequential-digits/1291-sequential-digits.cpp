class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> q;
        for(int i=1;i<9;i++)
            q.push(i);
        vector<int> ans;
        while(!q.empty()) {
            int f=q.front();
            q.pop();
            if(f>=low && f<=high)  ans.push_back(f);
            if(f>high) break;
            if(f%10 < 9) {
                int rem=f%10;
                q.push(f*10+rem+1);
            }
            
        }
        return ans;
    }
};