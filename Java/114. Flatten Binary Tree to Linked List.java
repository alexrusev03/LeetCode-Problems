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
    public TreeNode flatten(TreeNode root) {
        if(root == null){
            return root;
        }
        TreeNode l = flatten(root.left);
        TreeNode r = flatten(root.right);
        if (l != null){
            l.right = root.right;
            root.right = root.left;
            root.left = null;
        }
        if (r != null){
            return r;
        }
        if (l != null){
            return l;
        }
        return root;
    }
}
