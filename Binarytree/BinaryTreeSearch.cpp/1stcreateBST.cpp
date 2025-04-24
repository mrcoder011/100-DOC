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