/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void storeinorder(TreeNode*root , vector <int> & inorder){
    //basecase 
    if(root == NULL){
        return;

    }
    //LNR operation 
    //L
    storeinorder(root-> left , inorder);
    // n
    inorder.push_back(root->val);
    // r
    storeinorder(root->right, inorder);
}

    bool findTarget(TreeNode* root, int k) {
        vector<int>inorder;

storeinorder(root , inorder);
// taerget by two pointer
int s = 0;
int e = inorder.size()-1;
while (s < e){
    int sum = inorder[s]+inorder[e];
    if (sum == k){
        return true;
    }
    else if (sum > k){
        e--;
    }
    else if(sum < k){
        s++;
    }
}
return false ;

        
    } 
};