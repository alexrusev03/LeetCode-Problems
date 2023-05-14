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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n1 = postorder.size()-1;
        int n2 = inorder.size()-1;
        return helper(inorder,postorder,n1,0,n2);
    }
    TreeNode* helper(vector<int> &inorder,vector<int> &postorder,int& i,int l,int r){
        if(l>r){
            return NULL;
        }
        int k = r;
        while(postorder[i] != inorder[k]){
            k--;
        }
        i--;
        TreeNode* curr = new TreeNode(inorder[k]);
        curr->right = helper(inorder,postorder,i,k+1,r);
        curr->left = helper(inorder,postorder,i,l,k-1);
        return curr;
    }
};
