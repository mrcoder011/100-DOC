int solve(stack<int> &st, int &pos, int &ans) {  // Fix function parameters
    if (pos == 1) {
        ans = st.top();  // Assign value to ans
        return ans;
    }
    pos--;
    int temp = st.top();  // Fix stack top access
    st.pop();
    solve(st, pos, ans);
    st.push(temp);
    return ans;  // Ensure function returns a value
}

int getmiddleelement(stack<int> &st) {
    int size = st.size();
    if (st.empty()) return -1;
    
    int pos;  // Declare pos before use
    if (size & 1) {
        pos = size / 2 + 1;
    } else {
        pos = size / 2;
    }
    
    int ans = -1;
    solve(st, pos, ans);  // Fix function call
    return ans;
}
