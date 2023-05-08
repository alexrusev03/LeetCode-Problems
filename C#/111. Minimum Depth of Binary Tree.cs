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
    public int MinDepth(TreeNode root) {
        if(root==null){
            return 0;
        }
        int l = MinDepth(root.left);
        int r = MinDepth(root.right);
        if(l==0 || r==0){
            return (1 + l + r);
        }
        return 1 + Math.Min(l,r);
    }
}
