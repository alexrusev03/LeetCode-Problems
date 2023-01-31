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
    void solve(TreeNode* root, int targetSum, vector<int> &rtlpath, int sum, vector<vector<int>> &sol){
        if(root==NULL){return;}
        rtlpath.push_back(root->val);
        sum=sum+root->val;
        if(sum==targetSum && root->right==NULL && root->left==NULL){
            sol.push_back(rtlpath);
        }
        solve(root->right, targetSum, rtlpath, sum, sol);
        solve(root->left, targetSum, rtlpath, sum, sol);
        rtlpath.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> sol;
        vector<int> path;
        int sum  = 0;
        solve(root, targetSum, path, sum, sol);
        return sol;
    }
};
