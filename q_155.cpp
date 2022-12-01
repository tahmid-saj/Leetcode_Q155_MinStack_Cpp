class MinStack {
public:
    MinStack() {

    }

    void push(int val) {
        vecStk.push_back(val);
    }

    void pop() {
        vecStk.pop_back();
    }

    int top() {
        return vecStk.back();
    }

    int getMin() {
        int min = INT_MAX;

        for (int i = 0; i < vecStk.size(); i++) {
            if (vecStk[i] < min) {
                min = vecStk[i];
            }
        }

        return min;
    }

    vector<int> vecStk;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
