/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int helper(struct TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int l=helper(root->left);
    if(l==-1){
        return -1;
    }
    int r=helper(root->right);
    if(r==-1){
        return -1;
    }
    if(abs(l-r)>1){
        return -1;
    }
    return 1+fmax(l,r);
}
bool isBalanced(struct TreeNode* root){
    if(helper(root)!=-1){
        return true;
    }
    return false;
}
