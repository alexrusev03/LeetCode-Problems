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
    public bool IsBalanced(TreeNode root) {
        if(helper(root)!=-1){
            return true;
        }
        return false;
    }
    public int helper(TreeNode root){
        if(root==null){
            return 0;
        }
        int l=helper(root.left);
        if(l==-1){
            return -1;
        }
        int r=helper(root.right);
        if(r==-1){
            return -1;
        }
        if(Math.Abs(l-r)>1){
            return -1;
        }
        return 1+Math.Max(l,r);
    }
}
