/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool solution(struct TreeNode* root, long lowval, long highval){
    if(root==NULL){return true;}
    if(root->val>lowval && root->val<highval){
        return solution(root->left, lowval, root->val) && solution(root->right,root->val,highval);
    }
    return false;
}
bool isValidBST(struct TreeNode* root){
    return solution(root,LONG_MIN,LONG_MAX);
}
