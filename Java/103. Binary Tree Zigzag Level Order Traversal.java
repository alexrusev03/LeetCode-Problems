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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> sol=new LinkedList<>();
        Queue<TreeNode> q=new LinkedList<>();
        if(root==null){
            return sol;
        }
        q.offer(root);
        int count = 1;
        while(!q.isEmpty()){
            int n=q.size();
            List<Integer> subL=new LinkedList<>();
            for(int i=0;i<n;i++){
                if(q.peek().left!=null){
                    q.offer(q.peek().left);
                }
                if(q.peek().right!=null){
                    q.offer(q.peek().right);
                }
                subL.add(q.poll().val);
            }
            if(count%2==0){
                Collections.reverse(subL);
            }
            count++;
            sol.add(subL);
        }
        return sol;
    }
}
