/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
     public TreeNode LowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
       if(root == null) {return null;}
       
       if(root.val == p.val|| root.val == q.val){
           return root;
       }
       
       TreeNode l = LowestCommonAncestor(root.left,p,q);
       TreeNode r = LowestCommonAncestor(root.right,p,q);
       
       if(l != null && r != null ) {return root;}
       else if(l != null && r ==null) {return l;}
       else if(l == null && r !=null) {return r;}
       else {return null;}
    }
};
