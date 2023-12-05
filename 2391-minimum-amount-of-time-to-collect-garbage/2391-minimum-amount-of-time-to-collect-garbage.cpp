class Solution {
public:
    //Approach is very simple we simple will count the number of metal,glass and plastic garbage occurence and we know that it takes 1 minute to pick. Then we have to calculate the travel cost. Travel cost to ith house to the i+1 th house is given. we will calculate the preffix sum. This preffix sum because if metal is present at house 3 then we have to include the cost from travelling from house 1 to house 2 then house 2 to house 3 therefore will calculate the preffix cost of travel. Then simply will add the travel cost to the occurence of respective garbages.
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int m=0,p=0,g=0, n=garbage.size();
        int lastm=-1, lastg=-1 , lastp= -1;
        for(int i=0 ; i<n ;i++) {
            for( auto c: garbage[i]) {
                if(c=='G')  {
                    g++;
                    lastg = i;
                }
                else if(c=='P') {
                    p++;
                    lastp = i;
                }
                else {
                    m++;
                    lastm=i;
                }
            }
        }
        
        for(int i=1; i<travel.size() ;i++) {
            travel[i] += travel[i-1];
        }
        m+= lastm>0  ? travel[lastm-1] : 0;
        p+= lastp>0 ? travel[lastp-1] : 0;
        g+= lastg>0 ? travel[lastg-1] : 0;
        return m + p + g;
        
        
    }
};