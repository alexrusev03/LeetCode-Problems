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
    int d=0;
    int res=0;
    public int deepestLeavesSum(TreeNode root) {
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
