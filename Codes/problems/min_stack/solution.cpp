class MinStack {
public:
    int tops;
    int arr[30000];
    MinStack() {
        
        memset(arr,0,sizeof(arr));
        tops=-1;
        
    }
    
    void push(int val) {
        
        arr[++tops] = val;
        
    }
    
    void pop() {
        
        tops--;
        
    }
    
    int top() {
        
        return arr[tops];
        
    }
    
    int getMin() {
        
        int mina = INT_MAX;
        for(int i=0; i<=tops; i++)
        {
            if(arr[i]<mina)
                mina=arr[i];
        }
        
        return mina;
        
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