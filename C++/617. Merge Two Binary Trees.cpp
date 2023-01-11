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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL){
            return root2;
        }
        if (root2==NULL){
            return root1;
        }
        TreeNode* root3 = new TreeNode(root1->val+root2->val);
        if(root1->right!=NULL || root2->right!=NULL){
            root3->right=mergeTrees(root1->right,root2->right);
        }
        if(root1->left!=NULL || root2->left!=NULL){
            root3->left=mergeTrees(root1->left,root2->left);
        }
        return root3;
    }
};
