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
    public TreeNode sol(int l, int r, int[] nums){
        if(l>r){
            return null;
        }
        int m = (l+r)/2;
        TreeNode root= new TreeNode(nums[m]);
        root.left=sol(l,m-1,nums);
        root.right=sol(m+1,r,nums);
        return root;
    }
    public TreeNode sortedArrayToBST(int[] nums) {
        return sol(0,nums.length-1,nums);
    }
}
