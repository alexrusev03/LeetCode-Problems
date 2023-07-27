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
    public int MaxLevelSum(TreeNode root) {
        if(root==null){
            return 0;
        }
        Queue<TreeNode> q = new Queue<TreeNode>();
        q.Enqueue(root);
        int res=1;
        int max=Int32.MinValue;
        int lev=0;
        while(q.Count!=0){
            int n=q.Count;
            int sum=0;
            lev++;
            for(int i=0;i<n;i++){
                TreeNode t=q.Dequeue();
                sum+=t.val;
                if(t.left!=null){
                    q.Enqueue(t.left);
                }
                if(t.right!=null){
                    q.Enqueue(t.right);
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
