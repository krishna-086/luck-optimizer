class MinStack {
    stack<pair<int, int>> st;

public:
    MinStack() {}

    void push(int value) {
        int mini = st.empty() ? value : min(value, st.top().second);
        st.push({value, mini});
    }

    void pop() {
        st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }
};
