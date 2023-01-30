/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *l;
 *     TreeNode *r;
 *     TreeNode() : val(0), l(nullptr), r(nullptr) {}
 *     TreeNode(int x) : val(x), l(nullptr), r(nullptr) {}
 *     TreeNode(int x, TreeNode *l, TreeNode *r) : val(x), l(l), r(r) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		int n = inorder.size();
        int i = 0;
        return sol(preorder, inorder, i, 0, n-1);
    }
    
    TreeNode* sol(vector<int>& preorder, vector<int>& inorder, int& i, int l, int r) {
        if (l > r) {return NULL;}
        int inorderStart = l;
        while(inorder[inorderStart] != preorder[i]) {inorderStart++;}
        i++;
        TreeNode* root = new TreeNode(inorder[inorderStart]);
        root->left = sol(preorder, inorder, i, l, inorderStart-1);
        root->right = sol(preorder, inorder, i, inorderStart+1, r);
        return root;
    }
};
