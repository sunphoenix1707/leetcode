class DataStream {
public:
    vector<int> v;
    int value;
    int k;
    int i=0,j=0;
    int cnt=0;
    DataStream(int value, int k) {
        this->value=value;
        this->k=k;
    }
    
    bool consec(int num) {
        v.push_back(num);
        bool flag;
        if(v[j]==value) cnt++;
        
         if(j-i+1 < k) {
            flag=false;
            j++;
        }
         else if((j-i+1)==k) {
             if(cnt==k) flag=true;
             else flag=false;
             
             if(v[i]==value) cnt--;
             i++;
             j++;
         }
        return flag;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */