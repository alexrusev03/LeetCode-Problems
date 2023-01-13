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
    vector<int> vec;
    void solution(TreeNode* root){
        if(root==NULL){return;}
        solution(root->left);
        solution(root->right);
        vec.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        solution(root);
        return vec;
    }
};
