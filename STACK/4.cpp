#include <iostream>
#include <stack>
using namespace std;

int solve(stack<int> &st, int &pos, int &ans) {
    // Base case 
    if (pos == 1) {
        ans = st.top();  // Assign top element to ans
        return ans;
    }
    
    pos--;
    int temp = st.top();  // Store current top
    st.pop();
    
    // Recursive call
    solve(st, pos, ans);
    
    // Backtracking to restore stack
    st.push(temp);
    
    return ans;
}

int getmiddleelement(stack<int> &st) {
    int size = st.size();
    if (st.empty()) return -1;
    
    int pos = (size / 2) + 1;  // Correct way to find the middle position
    int ans = -1;
    
    solve(st, pos, ans);
    return ans;
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int mid = getmiddleelement(st);  // Corrected function call
    cout << "Middle element: " << mid << endl;
    
    return 0;
}
