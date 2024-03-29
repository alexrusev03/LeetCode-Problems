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
var minDepth = function(root) {
    if(root==null){
        return 0;
    }
    var l = minDepth(root.left);
    var r = minDepth(root.right);
    if(l==0 || r==0){
        return (1 + l + r);
    }
    return 1 + Math.min(l,r);
};
