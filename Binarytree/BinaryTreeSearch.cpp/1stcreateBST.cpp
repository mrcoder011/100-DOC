#include <>iostream>
#include <>queue>
#include <>vector>
#include <>map>
#include <>algorithm>

using namespace std;
class Node{
    public:
    int data 
    Node*left;
    Node*right;
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
        Node * insertBst(Node*root, int data){
            if(root == NULL){
                return new Node(data);
            }
            if(data > root->data){
                root->right = insertBst(root->right, data);
            }else{
                root->left = insertBst(root->left, data);
            }
            return root;
        }
    }

    void createBST( Node*&root )
    {
        cout << "Enter the data: ";
        int data;
        cin >> data;
        while(data != -1){
            root = insertBst(root, data);
            cin >> data;

        }
        
    }
};

int main(){
Node*root = createBST()
    return 0;

}
// preorder traversal of the BST

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
// inorder traversal of the BST // LNR
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node*Minvalue(Node* root) {
    if (root == NULL) return NULL;
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}
Node*Maxvalue(Node* root) {
    if (root == NULL) return NULL;
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}
