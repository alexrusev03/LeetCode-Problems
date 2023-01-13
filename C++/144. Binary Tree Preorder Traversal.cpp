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
    void solution(vector<int> &vec, TreeNode* root){
        if(root==NULL){
            return;
        }
        vec.push_back(root->val);
        solution(vec,root->left);
        solution(vec,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        solution(vec,root);
        return vec;
    }
};
