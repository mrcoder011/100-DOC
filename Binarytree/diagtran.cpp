#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;
class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
    class Solution {
        public:
            vector<int> diagonal(Node* root) {
                vector<int> ans;
                if (!root)
                    return ans;
                
                queue<Node*> q;
                q.push(root);
                
                while (!q.empty()) {
                    Node* temp = q.front();
                    q.pop();
                    
                    while (temp) {
                        ans.push_back(temp->data);
                        if (temp->left)
                            q.push(temp->left);
                        temp = temp->right;
                    }
                }
                
                return ans;
            }
        };
        
};