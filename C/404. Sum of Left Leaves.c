/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int res;
void solve(struct TreeNode* root) {
    if(root==NULL){
        return;
    }
    if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL){
        res += root->left->val;
    }
    solve(root->left);
    solve(root->right);
}
int sumOfLeftLeaves(struct TreeNode* root){
    res = 0;
    solve(root);
    return res;
}
