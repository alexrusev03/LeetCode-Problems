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
    TreeNode* flatten(TreeNode* root) {
        if(root == NULL){
            return root;
        }
        TreeNode* l = flatten(root->left);
        TreeNode* r = flatten(root->right);
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
};
