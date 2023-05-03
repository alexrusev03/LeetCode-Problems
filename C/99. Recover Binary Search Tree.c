/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void recoverTree(struct TreeNode* root){
    struct TreeNode* f=NULL;
    struct TreeNode* s=NULL;
    struct TreeNode* pre=NULL;
    void helper(struct TreeNode* root){
        if(root==NULL){
            return;
        }
        helper(root->left);
        if(pre && pre->val>root->val){
            if(f==NULL){
                f=pre;
            }
            s=root;
        }
        pre=root;
        helper(root->right);
    }
    helper(root);
    int temp = f->val;
    f->val=s->val;
    s->val=temp;
}
