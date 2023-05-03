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
    TreeNode f=null;
    TreeNode s=null;
    TreeNode pre=null;
    public void RecoverTree(TreeNode root) {
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
