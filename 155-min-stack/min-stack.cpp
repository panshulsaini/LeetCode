class MinStack {
public:
    vector<int> st;
    vector<int> min_st;

    MinStack() {
    }
    
    void push(int value) {
        st.push_back(value);
        if (min_st.empty() || value <= min_st.back()) {
            min_st.push_back(value);
        }
    }
    
    void pop() {
        if (st.back() == min_st.back()) {
            min_st.pop_back();
        }
        st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return min_st.back();
    }
};