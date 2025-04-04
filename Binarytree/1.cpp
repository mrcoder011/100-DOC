#include <iostream>
using namespace std;
class node 
{
public:
int data;
node *left;
node *right;
node(int val){
    this ->data = val;
    this->left = NULL;
    this->right = NULL;
};

// it return root node of created tree

node*createtree(){
    cout << "enter the data" << endl;
    int data;
    cin>> data;
    if(data == -1){
        return NULL;
    }// step 1 done 

    node*newnode = new node(data);
// step create left subtree 
// step 3 create right subtree 
    newnode->left = createtree();
    newnode->right = createtree();
    return newnode;

}
};
int main (){
    node*root = createtree();
    cout<< root->data << endl;
    return 0;

}