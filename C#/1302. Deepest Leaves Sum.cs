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
    int d=0;
    int res=0;
    public int DeepestLeavesSum(TreeNode root) {
        int height=0;
        dfs(root,height);
        return res;
    }
    public void dfs(TreeNode root,int height){
        if(root.left==null && root.right==null){
            if(height==d){
                res+=root.val;
            }
            else if(height>d){
                d=height;
                res=root.val;
            }
        }
        if(root.left!=null){
            dfs(root.left,height+1);
        }
        if(root.right!=null){
            dfs(root.right,height+1);
        }
    }
}
