class Solution {
public:
    int convertTime(string current, string correct) {
        int h1 = (current[0]-'0')*10+(current[1]-'0');
         int h2 = (correct[0]-'0')*10+(correct[1]-'0');
        int m1 =  (current[3]-'0')*10+(current[4]-'0'); 
          int m2  = (correct[3]-'0')*10+(correct[4]-'0');
        
        int total = (h2-h1)*60+(m2-m1);
        int res = 0;
        if(total>=60) {
            int temp = (total/60);  //to know difference of hours
            total=total-(temp)*60;
            res+=temp;
        }
         if(total>=15) {
            int temp = (total/15);  //to know difference of hours
            total=total-(temp)*15;
            res+=temp;
        }
         if(total>=5) {
              int temp = (total/5);  //to know difference of hours
            total=total-(temp)*5;
            res+=temp;
        }
       res+=total;
        return res;
    }
};