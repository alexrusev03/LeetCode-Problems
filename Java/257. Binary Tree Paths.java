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
    public List<String> binaryTreePaths(TreeNode root) {
        List<String> res = new ArrayList();
        String s = "";
        helper(root,s,res);
        return res;
    }
    void helper(TreeNode root,String s,List<String> res){
        if(root.left==null && root.right==null){
            s=s+root.val;
            res.add(s);
        }
        s=s+root.val+"->";
        if(root.left!=null){
            helper(root.left,s,res);
        }
        if(root.right!=null){
            helper(root.right,s,res);
        }
    }
}
