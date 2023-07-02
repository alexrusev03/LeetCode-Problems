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
    int diff = INT_MAX;
    int temp = -1;
    void helper(TreeNode *root){
        if(root){
            helper(root->left);
            if(temp==-1){
                temp=root->val;
            }
            else{
                diff=min(root->val-temp,diff);
                temp=root->val;
            }
            helper(root->right);
        }
    }
    int minDiffInBST(TreeNode* root) {
        helper(root);
        return diff;
    }
};
