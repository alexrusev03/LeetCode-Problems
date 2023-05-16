/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* flatten(struct TreeNode* root){
    if(root == NULL){
        return root;
    }
    struct TreeNode* l = flatten(root->left);
    struct TreeNode* r = flatten(root->right);
    if (l != NULL){
        l->right = root->right;
        root->right = root->left;
        root->left = NULL;
    }
    if (r != NULL){
        return r;
    }
    if (l != NULL){
        return l;
    }
    return root;
}
