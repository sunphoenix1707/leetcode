class Solution {
public:
    //Ques says that we have to pick two element pairs and we have to pick in such way that
    //array get reduced to half or also can be less than half but array cannot be more than half.
    int minSetSize(vector<int>& arr) {
       unordered_map<int,int>mp;
        for(auto i:arr) mp[i]++;
        priority_queue<int> pq;
        for(auto i:mp) pq.push(i.second);
        int num_of_occ=0,res=0;
        int n=arr.size()/2;
        while(num_of_occ<n) {
            num_of_occ+=pq.top();
            pq.pop();
            res++;
        }
        return res;
    }
};