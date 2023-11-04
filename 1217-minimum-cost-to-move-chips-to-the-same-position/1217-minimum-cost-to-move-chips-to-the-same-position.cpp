class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        //logic is very simple we will check value is even index or not. if value is even index we will simply increment and if value is odd index we will again increment.
        //we know that even to even index moving has cost 0 thats why cost will be only for moving even to odd or vice versa.
        int even=0,odd=0;
        for(int i=0;i<position.size();i++) {
            if(position[i] & 1) odd++;
            else even++;
        }
        return min(even,odd);
    }
};