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
    TreeNode* sol(int l, int r, vector<int> &nums){
        if(l>r){
            return 0;
        }
        int m = (l+r)/2;
        TreeNode* root= new TreeNode(nums[m]);
        root->left=sol(l,m-1,nums);
        root->right=sol(m+1,r,nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sol(0,nums.size()-1,nums);
    }
};
