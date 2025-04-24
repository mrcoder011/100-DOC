#include <iostream>
using namespace std;

// Node structure definition
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to insert a node into the BST
Node* InsertBst(Node* root, int data) {
    // Base case: if tree is empty
    if (root == NULL) {
        return new Node(data);
    }

    // Recursive insertion
    if (data > root->data) {
        root->right = InsertBst(root->right, data);
    } else {
        root->left = InsertBst(root->left, data);
    }

    return root;
}

// Optional: Inorder traversal to verify tree structure
void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = NULL;

    // Inserting elements
    root = InsertBst(root, 5);
    InsertBst(root, 1);
    InsertBst(root, 3);
    InsertBst(root, 4);
    InsertBst(root, 2);
    InsertBst(root, 7);

    // Print inorder traversal to verify structure
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
