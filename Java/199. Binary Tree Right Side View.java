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
    public List<Integer> solution(TreeNode root, List<Integer> sol, int l){
        if (root==null){
            return sol;
        }
        if (sol.size()==l){
            sol.add(root.val);
        }
        sol = solution(root.right, sol ,l + 1);
        sol = solution(root.left, sol ,l + 1);
        return sol;
    }
    
    public List<Integer> rightSideView(TreeNode root) {
        List sol=new ArrayList<>();
        sol = solution(root, sol, 0);
        return sol;
    }
}
