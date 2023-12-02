class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=cost.size(),sum=0,c=-1,j=0,val=0;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            v[i]=gas[i]-cost[i];
            sum+=v[i];
        }
        if(sum<0) return -1;
        while(j%n != c) {
            val+=v[j%n];
            if(val<0)  val=0,c=-1; 
            else if(c==-1) c=j%n;
            j++;
        }
        return c;
    }
};