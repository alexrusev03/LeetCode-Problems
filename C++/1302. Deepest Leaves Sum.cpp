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
    int deepestLeavesSum(TreeNode* root) {
        int d=0;
        int height=0;
        int res=0;
        dfs(root,res,height,d);
        return res;
    }
    void dfs(TreeNode* root,int& res,int height,int& d){
        if(!root->left && !root->right){
            if(height==d){
                res+=root->val;
            }
            else if(height>d){
                d=height;
                res=root->val;
            }
        }
        if(root->left){
            dfs(root->left,res,height+1,d);
        }
        if(root->right){
            dfs(root->right,res,height+1,d);
        }
    }
};
