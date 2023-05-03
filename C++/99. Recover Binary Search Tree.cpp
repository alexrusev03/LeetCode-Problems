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
    TreeNode* f=NULL;
    TreeNode* s=NULL;
    TreeNode* pre=NULL;
    void recoverTree(TreeNode* root) {
        helper(root);
        swap(f->val,s->val);
    }
    void helper(TreeNode* root){
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
};
