
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int> st;
        for (int i = 0; i < arr.size(); ++i) {
            if (st.empty() || arr[i] >= st.top()) {
                st.push(arr[i]);
            } else {
                int currMax = st.top();
                st.pop();
                while (!st.empty() && st.top() > arr[i]) {
                    st.pop();
                }
                st.push(currMax);
            }
        }
        return st.size();
    }
};
//lets design test case //[2,0,1,4,3,5]
//now initially stack is empty simply push 2 in it
// now 0>2 no we need to sort out array we fall into else condition
//currmax=2
//stack pop 2 => stempty
//st.push(2)
//1>2 no again we need to sort
//st.empty
//st.push(2)
//4>2 yes
//4 push in stack 2 already in stack
//3>4 no
//curmax=4 pop
// stack has 2 while loop 2>3 no 
// push 4
//5>4 yes indeed it is
// push 5
// at the end we will simply return the array size which is 3

//lets dry run another example
//[5,0,1,3,2,4]
//st.push(5) 
//0>5 no 
//1>5 no
//3>5 no
//2>5 no
//4>5 no

//lets dry run another example [5, 4, 3, 2, 6, 1,0,7]
//array.push(5)
//4>5 no
//st.pop
//3>5 no
//2>5 no
//6>5 yes
//st(5,6)
//1>6 no
//6 pop
//5>1 yes 5 pop
//6 push
//0>6 no
//7>6
//push(6,7)
