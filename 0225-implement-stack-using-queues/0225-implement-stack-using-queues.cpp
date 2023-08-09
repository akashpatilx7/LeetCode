class MyStack {
public:
    // Time Complexity : O(N) & Space Complexity : O(N)
    
    queue<int>q1;

    MyStack() {
        
    }
    
    void push(int x) {
        int size=q1.size();
        q1.push(x);
        while(size--){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        int result=top();
        q1.pop();
        return result;
        
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
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