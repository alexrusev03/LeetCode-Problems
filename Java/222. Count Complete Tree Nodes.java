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
    public int countNodes(TreeNode root) {
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
            return (int)Math.pow(2,n1)-1;
        }
        return 1+countNodes(root.left)+countNodes(root.right);
    }
}
