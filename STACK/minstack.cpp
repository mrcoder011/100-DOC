#include <iostream>
#include <vector>
using namespace std;

class MinStack {
public:
    vector<pair<int, int>> st;

    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push_back({val, val});
        } else {
            int currentMin = min(st.back().second, val);
            st.push_back({val, currentMin});
        }
    }

    void pop() {
        if (!st.empty()) {
            st.pop_back();
        }
    }

    int top() {
        if (!st.empty()) {
            return st.back().first;
        }
        return -1; // Return -1 if stack is empty
    }

    int getMin() {
        if (!st.empty()) {
            return st.back().second;
        }
        return -1; // Return -1 if stack is empty
    }
};

// Main function to test MinStack
int main() {
    MinStack minStack;

    minStack.push(5);
    minStack.push(2);
    minStack.push(8);
    minStack.push(1);

    cout << "Top element: " << minStack.top() << endl;   // Output: 1
    cout << "Minimum element: " << minStack.getMin() << endl; // Output: 1

    minStack.pop();
    cout << "Top element after pop: " << minStack.top() << endl;   // Output: 8
    cout << "Minimum element after pop: " << minStack.getMin() << endl; // Output: 2

    return 0;
}
