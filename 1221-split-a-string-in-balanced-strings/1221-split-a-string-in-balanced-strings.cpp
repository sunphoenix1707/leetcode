class Solution {
public:
    //strategy: finding substrings by using the preffix sum
int balancedStringSplit(string s) {
    int a = 0, b = 0, ans = 0;
    for (auto c : s) {
        if (c == 'R') a++;
        else b++;
        if (a == b) ans++,a=0,b=0;
    }
    return ans;
}


   
};