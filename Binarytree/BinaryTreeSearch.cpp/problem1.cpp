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
bool solve(TreeNode*root ,long long int lower, long long int higher ){
    if (root ==NULL){
        return true;
        

    }
    bool cond1 = (root ->val > lower  );
    bool cond2 = (root -> val < higher);
    bool leftAns = solve( root->left , lower , root->val );
    bool rightAns = solve (root -> right , root->val , higher );
    if (cond1 &&  cond2 && leftAns && rightAns  ){
        return true;
    }
    else {
        return false ;
    }
}
    bool isValidBST(TreeNode* root) {
        // minus infinity and infinity case 
     long long   int lower = -2147483658;
      long long   int higher = 2147483697;

bool ans = solve(root , lower, higher);
return ans;

    }
};