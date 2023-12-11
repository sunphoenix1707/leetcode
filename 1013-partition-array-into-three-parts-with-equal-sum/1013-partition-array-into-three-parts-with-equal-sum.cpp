class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
         int sum = 0;
        for(int i : arr) sum += i;
        if(sum % 3) return false;

        int part = sum / 3, cnt = 0, ps = 0, els = 0;
        for(int i : arr) {
            ps += i;
            els++;
            if(ps == part) cnt++, ps = 0, els = 0;
        }
        // if(ps == part && els) cnt++;
        return cnt >= 3;
    }
};