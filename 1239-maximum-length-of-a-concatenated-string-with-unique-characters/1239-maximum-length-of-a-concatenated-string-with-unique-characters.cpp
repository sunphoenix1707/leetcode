class Solution {
public:
    int maxLength(vector<string>& arr) {
        unordered_set<char> unique;
        return maxLengthHelper(arr,0,unique);
    }
    private:
    
    int maxLengthHelper(vector<string>& arr, int idx, unordered_set<char> &unique) 
    {
        if(idx == arr.size()) {
            return unique.size();
        }
        
        unordered_set<char> temp= unique;
        bool identical = true;
        for(auto i : arr[idx]) {
            if(temp.find(i)!=temp.end()) {
                identical=false;
                break;
            }
            temp.insert(i);
        }
        
          int lengthincluded = 0;
        if(identical)
             lengthincluded = maxLengthHelper(arr, idx+1, temp);
        int lengthexcluded = maxLengthHelper(arr,idx+1,unique);
        
        return max(lengthincluded,lengthexcluded);
    }
};