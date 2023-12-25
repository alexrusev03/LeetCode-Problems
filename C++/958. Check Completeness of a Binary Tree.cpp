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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode* n;
        bool f = false;
        q.push(root);
        while(q.size()>0){
            n = q.front();
            q.pop();
            if(n == NULL){
                f = true;
            }
            else{
                if(f == true){
                    return false;
                }
                q.push(n->left);
                q.push(n->right);
            }
        }
        return true;
    }
};
