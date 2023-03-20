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
    public boolean solution(TreeNode root, long lowval, long highval){
        if(root==null){return true;}
        if(root.val>lowval && root.val<highval){
            return solution(root.left, lowval, root.val) && solution(root.right,root.val,highval);
        }
        return false;
    }
    public boolean isValidBST(TreeNode root) {
        return solution(root,Long.MIN_VALUE,Long.MAX_VALUE);
    }
}
