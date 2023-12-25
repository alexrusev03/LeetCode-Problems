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
    public boolean isCompleteTree(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        TreeNode n;
        boolean f = false;
        q.offer(root);
        while(q.size()>0){
            n = q.poll();
            if(n == null){
                f = true;
            }
            else{
                if(f == true){
                    return false;
                }
                q.offer(n.left);
                q.offer(n.right);
            }
        }
        return true;
    }
}
