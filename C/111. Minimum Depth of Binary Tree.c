/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int l = minDepth(root->left);
    int r = minDepth(root->right);
    if(l==0 || r==0){
        return (1 + l + r);
    }
    return 1 + fmin(l,r);
}
