class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        //here we want maximum score and we can choose any index and we can apply that ceil divide operation so for this we will be choosing the maximum element always then will apply operation and will add the score of the original element in the array for this we will be using priority queue.
        priority_queue<int> pq;
        for(int i: nums) pq.push(i);
        long long score=0;
        for(int i=0;i<k;i++) {
            long long maxelement=pq.top();
            score+=maxelement;
            pq.pop();
            pq.push((maxelement+2)/3); // +2 will give ceil value;
        }
        return score;
    }
};