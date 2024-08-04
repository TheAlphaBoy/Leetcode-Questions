class MyStack {
public:

    // Sol 1 : Using 2 queues :
    // queue<int>q1;
    // queue<int>q2;
    // MyStack() {
        
    // }
    
    // void push(int x) {
    //     q2.push(x);
    //     if(!q1.empty()){
    //         while(!q1.empty()){
    //             q2.push(q1.front());
    //             q1.pop();
    //         }
    //     }
    //     swap(q1,q2);
    // }
    
    // int pop() {
    //     int val=q1.front();
    //     q1.pop();
    //     return val;
    // }
    
    // int top() {
    //     return q1.front();
    // }
    
    // bool empty() {
    //     return q1.empty();
    // }

    // Sol 2 : Using 1 queue 

    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int n=q.size();
        for(int i=0;i<n-1;++i){
            int val=q.front();
            q.pop();
            q.push(val);
        }
    }
    
    int pop() {
        int val=q.front();
        q.pop();
        return val;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
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