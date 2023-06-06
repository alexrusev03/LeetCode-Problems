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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string s = "";
        helper(root,s,res);
        return res;
    }
    void helper(TreeNode* root,string s,vector<string> &res){
        if(root->left==NULL && root->right==NULL){
            s=s+to_string(root->val);
            res.push_back(s);
        }
        s=s+to_string(root->val)+"->";
        if(root->left!=NULL){
            helper(root->left,s,res);
        }
        if(root->right!=NULL){
            helper(root->right,s,res);
        }
    }
};
