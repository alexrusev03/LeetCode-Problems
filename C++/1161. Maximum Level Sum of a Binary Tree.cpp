/**
 * Definition for a binary tree t.
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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int res=1;
        int max=INT_MIN;
        int lev=0;
        while(q.empty()==NULL){
            int n=q.size();
            int sum=0;
            lev++;
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                sum+=t->val;
                if(t->left!=NULL){
                    q.push(t->left);
                }
                if(t->right!=NULL){
                    q.push(t->right);
                }
                q.pop();
            }
            if(sum>max){
                max=sum;
                res=lev;
            }
        }
        return res;
    }
};
