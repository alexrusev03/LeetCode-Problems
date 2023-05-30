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
    public int CountNodes(TreeNode root) {
        int n1 = 0;
        int n2 = 0;
        TreeNode l = root;
        TreeNode r = root;
        while(l!=null){
            n1++;
            l=l.left;
        }
        while(r!=null){
            n2++;
            r=r.right;
        }
        if(n1==n2){
            return (int)Math.Pow(2,n1)-1;
        }
        return 1+CountNodes(root.left)+CountNodes(root.right);
    }
}
