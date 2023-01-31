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
    vector<int> solution(TreeNode* root, vector<int> sol, int l){
        if (root==nullptr){
            return sol;
        }
        if (sol.size()==l){
            sol.push_back(root->val);
        }
        sol = solution(root->right, sol ,l + 1);
        sol = solution(root->left, sol ,l + 1);
        return sol;
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> sol;
        sol = solution(root, sol, 0);
        return sol;
    }
};
