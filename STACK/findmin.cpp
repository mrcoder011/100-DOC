#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void nextsmaller(int *arr, int size, vector<int> &ans) {
    stack<int> st;
    st.push(-1);

    for (int i = size - 1; i >= 0; i--) {
        int curr = arr[i];

        while (!st.empty() && st.top() >= curr) { // Ensure stack is not empty before top()
            st.pop();
        }

        ans[i] = st.top();
        st.push(curr);
    }
}

int main() {
    int arr[5] = {8, 4, 6, 2, 3};
    int size = 5;
    vector<int> ans(size);

    nextsmaller(arr, size, ans); // Corrected function call

    for (auto i : ans) {
        cout << i << " ";
    }

    return 0;
}
