class MyQueue {
public:
    stack<int> s, sres;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s.empty()){
            sres.push(s.top());
            s.pop();
        }
        s.push(x);
        while(!sres.empty()){
            s.push(sres.top());
            sres.pop();
        }
    }
    
    int pop() {
        if(!s.empty()){
            int a = s.top();
            s.pop();
            return a;
        }
        else{return 0;}
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
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
