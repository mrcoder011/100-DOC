#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverseQueue(queue <int > &q) {
    stack<int> s;
    // one by one q se lo stack me daalo
    while (!q.empty()){
        int frontelement = q.front();
        q.pop();
        s.push(frontelement);

    }
/// one by one stack se lo or q me daaalop 
while (!s.empty()){
    int topelement = s.top();
    s.pop();
    q.push(topelement);

}
}
int main (){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseQueue(q);
    cout << "Reversed Queue: "<< endl;
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;

}