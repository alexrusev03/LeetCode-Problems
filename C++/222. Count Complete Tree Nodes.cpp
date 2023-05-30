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
    int countNodes(TreeNode* root) {
        int n1 = 0;
        int n2 = 0;
        TreeNode* l = root;
        TreeNode* r = root;
        while(l!=NULL){
            n1++;
            l=l->left;
        }
        while(r!=NULL){
            n2++;
            r=r->right;
        }
        if(n1==n2){
            return pow(2,n1)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
