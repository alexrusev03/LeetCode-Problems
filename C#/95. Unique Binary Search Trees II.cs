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
    public IList<TreeNode> GenerateTrees(int n) {
        IList<TreeNode> ans = helper(1, n);
        return ans;
    }
    public IList<TreeNode> helper(int start, int end) {
        IList<TreeNode> ans = new List<TreeNode>();
        if(start>end) {
            ans.Add(null);
            return ans;
        }
        for(int i=start; i<=end; i++) {
            IList<TreeNode> left = helper(start, i-1);
            IList<TreeNode> right = helper(i+1, end);
            foreach(var l in left){
                foreach(var r in right){
                    ans.Add(new TreeNode(i, l, r));
                }
            }
        }
        return ans;
    }
}
