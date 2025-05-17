#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void topview(Node*root){
    map<int,int>top;
}