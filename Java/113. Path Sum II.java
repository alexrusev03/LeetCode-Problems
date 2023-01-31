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
    public void solve(TreeNode root, int targetSum, List<Integer> rtlpath, List<List<Integer>> sol){
        if(root==null){return;}
        if(root.val==targetSum && root.right==null && root.left==null){
            List<Integer> list = new ArrayList<>(rtlpath);
            list.add(root.val);
            sol.add(list);
            return;
        }
        rtlpath.add(root.val);
        solve(root.right, targetSum-root.val, rtlpath, sol);
        solve(root.left, targetSum-root.val, rtlpath, sol);
        rtlpath.remove(rtlpath.size()-1);
        return;
    }
    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        List<List<Integer>> sol = new ArrayList<>();
        List<Integer> path = new ArrayList<>();
        solve(root, targetSum, path, sol);
        return sol;
    }
}
