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
    public bool IsValidBST(TreeNode root) {
        return solution(root,Int64.MinValue,Int64.MaxValue);
    }
    public bool solution(TreeNode root, long lowval, long highval){
        if(root==null){return true;}
        if(root.val>lowval && root.val<highval){
            return solution(root.left, lowval, root.val) && solution(root.right,root.val,highval);
        }
        return false;
    }
}
