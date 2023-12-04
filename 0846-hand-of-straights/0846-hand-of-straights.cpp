class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
       if(hand.size() % groupSize != 0) return false;
        sort(hand.begin(),hand.end());
        unordered_map<int,int> mp;
         for(auto c : hand ) mp[c]++;
         for(int h: hand) {
             if(mp[h] > 0) {
                 for(int i=0 ; i< groupSize ; i++) {
                     int val= h+i;
                     if(mp[val] == 0 ) return false;
                     mp[val]--;
                 }
             }
         }
        return true;
    }
    
};