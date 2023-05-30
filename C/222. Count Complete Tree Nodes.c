/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root){
    int n1 = 0;
    int n2 = 0;
    struct TreeNode* l = root;
    struct TreeNode* r = root;
    while(l!=NULL){
        n1++;
        l=l->left;
    }
    while(r!=NULL){
        n2++;
        r=r->right;
    }
    if(n1==n2){
        return pow(2,n1)-1;
    }
    return 1+countNodes(root->left)+countNodes(root->right);
}
