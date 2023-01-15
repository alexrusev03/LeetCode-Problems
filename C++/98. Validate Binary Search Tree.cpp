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
    bool solution(TreeNode* root, long lowval, long highval){
        if(root==NULL){return true;}
        if(root->val>lowval && root->val<highval){
            return solution(root->left, lowval, root->val) && solution(root->right,root->val,highval);
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        return solution(root,LONG_MIN,LONG_MAX);
    }
};
