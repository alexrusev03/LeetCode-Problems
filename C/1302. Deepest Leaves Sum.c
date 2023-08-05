/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void dfs(struct TreeNode* root,int* res,int height,int* d){
    if(!root->left && !root->right){
        if(height==*d){
            *res+=root->val;
        }
        else if(height>*d){
            *d=height;
            *res=root->val;
        }
    }
    if(root->left){
        dfs(root->left,res,height+1,d);
    }
    if(root->right){
        dfs(root->right,res,height+1,d);
    }
}
int deepestLeavesSum(struct TreeNode* root){
    int d=0;
    int height=0;
    int res=0;
    dfs(root,&res,height,&d);
    return res;
}
