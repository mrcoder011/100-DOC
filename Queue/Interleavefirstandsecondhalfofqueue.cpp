#include <iostream>
#include <queue>
using namespace std;

// Interleave function defined outside main
void Interleave(queue<int> &first) {
    queue<int> second;
    int size = first.size();
    int half = size / 2;

    // Push the first half elements into second queue
    for (int i = 0; i < half; i++) {
        int temp = first.front();
        first.pop();
        second.push(temp);
    }

    // Interleave both queues
    while (!second.empty()) {
        first.push(second.front());
        second.pop();

        first.push(first.front());
        first.pop();
    }
}

int main() {
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);

    Interleave(q);

    // Print interleaved queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}
