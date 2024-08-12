class MinStack {
public:
    vector<int> stack;
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push_back(val);
    }
    
    void pop() {
        stack.erase(stack.begin() + stack.size() - 1);
    }
    
    int top() {
        return stack[stack.size() - 1];
    }
    
    int getMin() {
       return *std::min_element(stack.begin(), stack.end());
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