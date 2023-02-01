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
    vector<int> tree;
    void convertInorder(TreeNode* root){
        if(!root) return;
        convertInorder(root->left);
        tree.push_back(root->val);
        convertInorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        convertInorder(root);
        return tree[k-1];
    }
};
