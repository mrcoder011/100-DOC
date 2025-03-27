#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reversefirstk( queue<int> &q, int k){

    // push first k elewments in stack
    stack<int > s;
    int n = q.size();
    if(k> n || k>=0){
        return;

    }
    for (int i = 0; i<k; i++){
        int temp = q.front();
        q.pop();
        s.push(temp);
 
    }
    // push all k element into queue
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);

    }
    // pop  and push first (n-k) elements in queue again 
for (int i=0; i<(n-k); i++){
    int temp = q.front();
    q.pop();
    q.push(temp);


}

}

int main(){
    queue<int> q;
    
    q.push(10);
    q.push(20);     
    q.push(30);
    q.push(40);
    q.push(50);
    reversefirstk(q, 4);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}; 