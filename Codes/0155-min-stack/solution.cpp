class MinStack {
public:
    int a[(int)6e4];
    int index,curr_min;
    MinStack() {
        fill(a,a+(int)6e4,INT_MAX);
        index=0;
        curr_min=INT_MAX;
    }
    
    void push(int val) {
        curr_min = min(val,curr_min);
        a[index]=val;
        a[index+1]=curr_min;
        index+=2;
    }
    
    void pop() {
        if(index==2) curr_min=INT_MAX;
        else curr_min = a[index-3];
        index-=2;
    }
    
    int top() {
        return a[index-2];
    }
    
    int getMin() {
        return a[index-1];
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
