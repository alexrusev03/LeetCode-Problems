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
    List<int> tree = new List<int>();
    public void convertInorder(TreeNode root){
        if(root==null) return;
        convertInorder(root.left);
        tree.Add(root.val);
        convertInorder(root.right);
    }
    public int KthSmallest(TreeNode root, int k) {
        convertInorder(root);
        return tree[k-1];
    }
}
