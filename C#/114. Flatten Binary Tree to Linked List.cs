/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public TreeNode Flatten(TreeNode root) {
        if(root == null){
            return root;
        }
        TreeNode l = Flatten(root.left);
        TreeNode r = Flatten(root.right);
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
