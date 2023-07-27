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
    public int maxLevelSum(TreeNode root) {
        if(root==null){
            return 0;
        }
        Queue<TreeNode> q = new ArrayDeque<TreeNode>();
        q.offer(root);
        int res=1;
        int max=Integer.MIN_VALUE;
        int lev=0;
        while(!q.isEmpty()){
            int n=q.size();
            int sum=0;
            lev++;
            for(int i=0;i<n;i++){
                TreeNode t=q.poll();
                sum+=t.val;
                if(t.left!=null){
                    q.offer(t.left);
                }
                if(t.right!=null){
                    q.offer(t.right);
                }
            }
            if(sum>max){
                max=sum;
                res=lev;
            }
        }
        return res;
    }
}
