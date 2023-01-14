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
    void solution(int lev, vector<vector<int>> &vec, TreeNode* root){
        if(!root){return;}
        if(lev==vec.size()){
            vec.push_back({root->val});
        }
        else{
            vec[lev].push_back(root->val);
        }
        solution(lev+1,vec,root->left);
        solution(lev+1,vec,root->right);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        solution(0,vec,root);
        return vec;
    }
};
