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
    public IList<string> BinaryTreePaths(TreeNode root) {
        List<string> res = new List<string>();
        string s = "";
        helper(root,s,res);
        return res;
    }
    void helper(TreeNode root,string s,List<string> res){
        if(root.left==null && root.right==null){
            s=s+root.val;
            res.Add(s);
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
