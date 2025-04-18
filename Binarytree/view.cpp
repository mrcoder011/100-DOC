#include <iostream> 
using namespace std;
class Node {
    public:
    int data ;
    Node*left;
    Node*right;
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }


};
Node *CreateTree(){
    cout << "enter the value ";
    int value ;
    cin >> value;
    if(value == -1 ){
        return NULL;  

    } 
    Node *root = new Node(value);
    root -> left = CreateTree();
    root-> right = CreateTree();
    return root;
     
} 
void leftview(Node*root int level , int size){
    if(root == NULL){
        return;
    
    }
    if (level == leftview.size() ){
       // push krlo
       leftview.push_back(root->data);


    }
printleft(root->left, level+1, size);
    printright(root->right, level+1, size);
    return;

}



int main(){
leftview.push_back(-1);
    Node*root = CreateTree();
    int size = 0;
    leftview(root, 0, size);
    cout << "left view of the tree is : ";
    for(int i = 0; i < leftview.size(); i++){
        cout << leftview[i] << " ";
    }
    return 0;
}