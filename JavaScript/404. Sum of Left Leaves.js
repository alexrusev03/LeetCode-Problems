/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var sumOfLeftLeaves = function(root) {
    var res = 0;
    function solve(root) {
        if(root==null){
            return 0;
        }
        if(root.left!=null && root.left.left==null && root.left.right==null){
            res += root.left.val;
        }
        solve(root.left);
        solve(root.right);
    };
    solve(root, res);
    return res;
};
