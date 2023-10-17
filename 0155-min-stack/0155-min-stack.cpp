class MinStack {
public:
    stack<long> st;
    long mini;
    MinStack() {
        mini=(long)(1e10);
    }
    
    void push(int val) {
       st.push(val-mini);
        if(val<mini) mini=val;
        
    }
    
    void pop() {
      if(st.top()<0) {
          mini=mini-st.top();
      }
        st.pop();
    }
    
    int top() {
       if(st.top()<0) return mini;
        return st.top()+mini;
    }
    
    int getMin() {
       return mini;
        //time c: 0(1) for n operations 0(n)
        //space 0(2N) pair added in stack
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */