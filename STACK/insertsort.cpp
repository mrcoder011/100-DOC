#include <iostream>
#include <stack>
using namespace std;

void insertsort(stack<int> &st, int element) {
    if (st.empty() || element > st.top()) {
        st.push(element);
        return;
    }

    // Hold the top element and recurse
    int temp = st.top();
    st.pop();
    insertsort(st, element);

    // Backtracking: Restore elements
    st.push(temp);
}

void sortstack(stack<int> &st) {
    if (st.empty()) {
        return;
    }

    int temp = st.top();
    st.pop();

    // Recursively sort the stack
    sortstack(st);

    // Insert the removed element at the correct position
    insertsort(st, temp);
}

int main() {
    stack<int> st;

    st.push(10);
    st.push(7);
    st.push(12);
    st.push(5);
    st.push(11);

    // First, sort the stack
    sortstack(st);

    // Then, insert a new element
    insertsort(st, 35);

    // Print the sorted stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
