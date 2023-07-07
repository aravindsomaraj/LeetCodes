class MinStack {
public:
    int A[(int)6e4+1];
    int index,curr_min;
    MinStack() {
        fill(A,A+(int)6e4+1,INT_MAX);
        index = 2;
        curr_min = INT_MAX;
    }
    
    void push(int val) {
        curr_min = min(val,curr_min);
        A[index] = val;
        A[index+1] = curr_min;
        index += 2;
    }
    
    void pop() {
        curr_min = A[index-3];
        index -= 2;
    }
    
    int top() {
        return A[index-2];
    }
    
    int getMin() {
        return A[index-1];
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
