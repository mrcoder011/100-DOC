#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to insert into BST
Node* insertBst(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }
    if (data > root->data) {
        root->right = insertBst(root->right, data);
    } else {
        root->left = insertBst(root->left, data);
    }
    return root;
}

// Function to create BST from input
void createBST(Node*& root) {
    cout << "Enter data to insert into BST (-1 to stop): ";
    int data;
    cin >> data;
    while (data != -1) {
        root = insertBst(root, data);
        cin >> data;
    }
}

// Preorder traversal (NLR)
void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder traversal (LNR)
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Get minimum value in BST
Node* Minvalue(Node* root) {
    if (root == NULL) return NULL;
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Get maximum value in BST
Node* Maxvalue(Node* root) {
    if (root == NULL) return NULL;
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

// Search in BST
bool searchinBST(Node* root, int target) {
    if (root == NULL) return false;
    if (root->data == target) return true;
    if (target > root->data) {
        return searchinBST(root->right, target);
    } else {
        return searchinBST(root->left, target);
    }
}
Node* deletefromBST(Node* root , target ){
    if (root == NULL) {
        return NULL;
    }
   
    }
    if (root-> data == target  ){
// ab delete krege 
// yha pr 4 case likhege 
if (root -> left == NULL && root->right == NULL ){
   delete root ;
    return NULL;
}
else if(root ->left !=NULL && root ->right == NULL){
    Node*childSubtree =  root -> left ;
    delete root ;
    return childSubtree;

}
else if (root ->left == NULL && root -> right != NULL){
    Node*childSubtree = root -> right ;
    delete root ;
    return childSubtree ;

}
else  {
    

}
// case 4

    }
// target found
else if(root -> data > target ){
 return deletefromBST(root->left , target );

} 
else {
    return deletefromBST(root->right , target );

} 
return root ;



int main() {
    Node* root = NULL;
    createBST(root);

    cout << "\nPreorder Traversal: ";
    preorder(root);

    cout << "\nInorder Traversal: ";
    inorder(root);

    Node* minNode = Minvalue(root);
    Node* maxNode = Maxvalue(root);
    if (minNode && maxNode) {
        cout << "\nMinimum Value in BST: " << minNode->data;
        cout << "\nMaximum Value in BST: " << maxNode->data;
    }

    // Using searchinBST
    int key;
    cout << "\n\nEnter value to search in BST: ";
    cin >> key;

    if (searchinBST(root, key)) {
        cout << "Value " << key << " is found in the BST.\n";
    } else {
        cout << "Value " << key << " is NOT found in the BST.\n";
    }

    return 0;
}
