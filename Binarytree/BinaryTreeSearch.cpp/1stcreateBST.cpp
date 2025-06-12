#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* bstfrominorder(int inorder[], int s, int e) {
    if (s > e) {
        return NULL;
    }

    int mid = (s + e) / 2;
    node* root = new node(inorder[mid]);
    root->left = bstfrominorder(inorder, s, mid - 1);
    root->right = bstfrominorder(inorder, mid + 1, e);
    return root;
}

void levelOrderPrint(node* root) {
    if (!root) return;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            node* current = q.front();
            q.pop();
            cout << current->data << " ";
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        cout << endl;
    }
}

int main() {
    int inorder[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(inorder) / sizeof(inorder[0]);
    node* root = bstfrominorder(inorder, 0, n - 1);

    cout << "Level Order Traversal of constructed BST:\n";
    levelOrderPrint(root);
}
