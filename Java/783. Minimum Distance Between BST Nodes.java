/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int diff = Integer.MAX_VALUE;
    int temp = -1;
    public void helper(TreeNode root){
        if(root!=null){
            helper(root.left);
            if(temp==-1){
                temp=root.val;
            }
            else{
                diff=Math.min(root.val-temp,diff);
                temp=root.val;
            }
            helper(root.right);
        }
    }
    public int minDiffInBST(TreeNode root) {
        helper(root);
        return diff;
    }
}
