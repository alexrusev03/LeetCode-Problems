/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {number[]} nums
 * @return {TreeNode}
 */
var sol = function(l,r,nums){
    if(l>r){
        return null;
    }
    var m = Math.floor((l+r)/2);
    let root= new TreeNode(nums[m]);
    root.left=sol(l,m-1,nums);
    root.right=sol(m+1,r,nums);
    return root;
}
var sortedArrayToBST = function(nums) {
    return sol(0,nums.length-1,nums);
}
