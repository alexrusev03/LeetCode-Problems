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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL){
            return res;
        }
        queue<TreeNode*> q;
        stack<vector<int>> stk;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> l;
            for(int i=0;i<n;i++){   
                TreeNode* temp = q.front();
                q.pop();
                l.push_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            stk.push(l);
        }
        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }
        return res;
    }
};
