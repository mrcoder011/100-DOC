#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q) {
    stack<int> s;
    // Transfer elements from queue to stack
    while (!q.empty()) {
        int frontelement = q.front();
        q.pop();
        s.push(frontelement);
    }
    // Transfer elements back from stack to queue
    while (!s.empty()) {
        int topelement = s.top();
        s.pop();
        q.push(topelement);
    }
}

void reverse(queue<int> &q) {
    if (q.empty()) {
        return;
    }
    int element = q.front();
    q.pop(); 
    // Recursively reverse the remaining queue
    reverse(q);
    q.push(element);
};

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverse(q);
    cout << "Reversed Queue: " << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
};