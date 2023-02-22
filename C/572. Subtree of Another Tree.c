/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool helper(struct TreeNode*root,struct TreeNode*subRoot){
    if(root==NULL && subRoot==NULL){return true;}
    if(root==NULL || subRoot==NULL){return false;}
    if(root->val!=subRoot->val){return false;}
    return helper(root->left,subRoot->left) && helper(root->right,subRoot->right);
}
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot){
    if(root==NULL){return false;}
    if(helper(root, subRoot)!=false){return true;}
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}
