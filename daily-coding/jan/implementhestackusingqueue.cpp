class myStack {
    queue<int> q;

  public:

    void push(int x) {
        // Inserts an element x at the top of the stack
        int n = q.size();
        q.push(x);
        for(int i=0; i<n; i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        // Removes an element from the top of the stack
        if(q.size()>0){
            q.pop();
        }
    }

    int top() {
        if(q.size()>0){
            return q.front();
        }
        return -1;
        // Returns the top element of the stack
        // If stack is empty, return -1
    }

    int size() {
        return q.size();
        // Returns the current size of the stack
    }
};
