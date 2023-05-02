/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> res;
        while(head!=NULL){
            res.push_back(head->val);
            head=head->next;
        }
        return sol(0,res.size()-1,res);
    }
    TreeNode* sol(int l, int r, vector<int> &res){
        if(l>r){
            return 0;
        }
        int m = (l+r)/2;
        TreeNode* root= new TreeNode(res[m]);
        root->left=sol(l,m-1,res);
        root->right=sol(m+1,r,res);
        return root;
    }
};
