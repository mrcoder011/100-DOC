#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;

    node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to create a binary tree from user input
node* createtree() {
    cout << "Enter data (-1 for NULL): ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    node* root = new node(data);

    cout << "Enter left of " << data << ": ";
    root->left = createtree();

    cout << "Enter right of " << data << ": ";
    root->right = createtree();

    return root;
}

// Function for Level Order Traversal
void levelorderTraversal(node* root) {
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* front = q.front();
        q.pop();
         if ( front == NULL){
cout << endl;
q.push(NULL);


         }
         else{
            // valid 
            cout << front->data << " ";

        if (front->left != NULL) {
            q.push(front->left);
        }

        if (front->right != NULL) {
            q.push(front->right);
        }
    }


            
         }
         }

        
int main() {
    node* root = createtree();
    cout << "\nLevel Order Traversal: ";
    levelorderTraversal(root);
    return 0;
};
