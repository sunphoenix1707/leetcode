class Solution {
   
public:
    int getMinSwaps(string num, int k) {
        string t=num; 
        int i,j;
        int n=t.size();
      while(k--) {
        for( i=n-2;i>=0;i--) {
            if(t[i]<t[i+1]) break;
        }
       if(i<0) {
            reverse(t.begin(),t.end());
        }
        else {
           
              for(j=n-1;j>i;j--) {
                if(t[j]>t[i]) break;
            }
            swap(t[i],t[j]);
            reverse(t.begin()+i+1,t.end());
            
        }  
        }
       
        int res=0;
        for(int i=0;i<num.size();i++) {
            if(t[i]!=num[i]) {
                int j=i;
                while(t[i]!=num[j]) j++;
                while(j>i) {
                    swap(num[j],num[j-1]);
                    j--;
                    res++;
                }
            }
        }
        return res;
    }
};


