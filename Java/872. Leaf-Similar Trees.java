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
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        List<Integer> list1 = new ArrayList<Integer>();
        List<Integer> list2 = new ArrayList<Integer>();
        helper(root1, list1);
        helper(root2, list2);
        return list1.equals(list2);
    }
    public void helper(TreeNode root, List<Integer> list){
        if(root == null){
            return;
        }
        if (root.left == null && root.right == null){
            list.add(root.val);
            return;
        }
        helper(root.left, list);
        helper(root.right, list);
    }
}
