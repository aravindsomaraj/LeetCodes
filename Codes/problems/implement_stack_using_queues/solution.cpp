class MyStack {
public:
    queue<int> a,b;
    MyStack() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        while(!a.empty())
        {
            int n = a.front();
            a.pop();
            if(!a.empty())
                b.push(n);
            else
            {
                a=b;
                b=queue<int>();
                return n;
            }
        }
        return -1;
    }
    
    int top() {
        while(!a.empty())
        {
            int n = a.front();
            a.pop();
            b.push(n);
            if(a.empty())
            {
                a=b;
                b=queue<int>();
                return n;
            }
        }
        return -1;
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */