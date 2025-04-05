#include <iostream>
#include <queue>
using namespace std;
void levelorderTransversal(node *root){
    queue<node*> q;
    q.push(root);
    while (!q.empty()){
        node*front = q.front();
        q.pop();
        cout << front -> data << " ";
        if (front-> left == NULL){
            q.push(front -> left);

        } 
        if (front -> right == NULL){
            q.push(front -> right);

        }
    }
}
int main (){
levelorderTransversal(root);
    return 0;
}