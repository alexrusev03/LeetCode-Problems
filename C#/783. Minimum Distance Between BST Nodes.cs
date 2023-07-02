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
    int diff = Int32.MaxValue;
    int temp = -1;
    public void helper(TreeNode root){
        if(root!=null){
            helper(root.left);
            if(temp==-1){
                temp=root.val;
            }
            else{
                diff=Math.Min(root.val-temp,diff);
                temp=root.val;
            }
            helper(root.right);
        }
    }
    public int MinDiffInBST(TreeNode root) {
        helper(root);
        return diff;
    }
}
