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
    TreeNode f=null;
    TreeNode s=null;
    TreeNode pre=null;
    public void recoverTree(TreeNode root) {
        helper(root);
        int temp = f.val;
        f.val=s.val;
        s.val=temp;
    }
    public void helper(TreeNode root){
        if(root==null){
            return;
        }
        helper(root.left);
        if(pre!=null && pre.val>root.val){
            if(f==null){
                f=pre;
            }
            s=root;
        }
        pre=root;
        helper(root.right);
    }
}
