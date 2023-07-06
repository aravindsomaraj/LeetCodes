class MyQueue {
public:
    stack<int> real,aux;
    int size;
    MyQueue() {
        size=0;
    }
    
    void push(int x) {
        while(!real.empty())
        {
            aux.push(real.top());
            real.pop();
        }
        real.push(x);
        while(!aux.empty())
        {
            real.push(aux.top());
            aux.pop();
        }
        size++;
    }
    
    int pop() {
        int top = real.top();
        real.pop();
        size--;
        return top;
    }
    
    int peek() {
        return real.top();
    }
    
    bool empty() {
        return real.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
