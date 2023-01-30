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
    public TreeNode SortedArrayToBST(int[] nums) {
        return sol(0,nums.Length-1,nums);
    }
}
