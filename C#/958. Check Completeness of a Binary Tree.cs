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
    public bool IsCompleteTree(TreeNode root) {
        Queue<TreeNode> q = new Queue<TreeNode>();
        TreeNode n;
        bool f = false;
        q.Enqueue(root);
        while(q.Count>0){
            n = q.Dequeue();
            if(n == null){
                f = true;
            }
            else{
                if(f == true){
                    return false;
                }
                q.Enqueue(n.left);
                q.Enqueue(n.right);
            }
        }
        return true;
    }
}
