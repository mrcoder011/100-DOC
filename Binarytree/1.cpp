#include <iostream>
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

// Function to create the tree
node* createtree() {
    cout << "Enter the data: ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    node* root = new node(data);

    // Create left subtree
    cout << "Enter the data for left of " << data << ": ";
    root->left = createtree();

    // Create right subtree
    cout << "Enter the data for right of " << data << ": ";
    root->right = createtree();

    return root;
}

// Preorder Traversal: NLR
void preorderTraversal(node *root) {
    if (root == NULL) {
        return;
    }

    // N - Node
    cout << root->data << " ";

    // L - Left
    preorderTraversal(root->left);

    // R - Right
    preorderTraversal(root->right);

    // inorder tanversal is LNR
    void inorderTraversal(node *root) {
        if(root == NULL)
{
    return;
} 
// L
inorderTraversal(root->left);

//N
cout<< root->data<< " ";
//R
inorderTraversal(root->right);

}    .
}

int main() {
    node* root = createtree();

    cout << "\nPreorder Traversal: ";
    preorderTraversal(root);
    cout << endl;
    inorderTraversal(root);
    cout << endl;

    return 0;
}
