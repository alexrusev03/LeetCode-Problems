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
    public List<TreeNode> generateTrees(int n) {
        List<TreeNode> ans = helper(1, n);
        return ans;
    }
    public List<TreeNode> helper(int start, int end) {
        List<TreeNode> ans = new ArrayList();
        if(start>end) {
            ans.add(null);
            return ans;
        }
        for(int i=start; i<=end; i++) {
            List<TreeNode> left = helper(start, i-1);
            List<TreeNode> right = helper(i+1, end);
            for(var l: left){
                for(var r: right){
                    ans.add(new TreeNode(i, l, r));
                }
            }
        }
        return ans;
    }
}
