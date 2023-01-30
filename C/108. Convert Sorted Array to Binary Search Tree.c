/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    if(numsSize==0){return NULL;}
    int l = 0;
    int r = numsSize-1;
    int m = (l+r)/2;
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->val = nums[m];
    root->left=sortedArrayToBST(&nums[0], m);
    root->right=sortedArrayToBST(&nums[m + 1], numsSize - m - 1);
    return root;
}
