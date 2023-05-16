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
 * @return {void} Do not return anything, modify root in-place instead.
 */
var flatten = function(root) {
    if(root == null){
        return root;
    }
    var l = flatten(root.left);
    var r = flatten(root.right);
    if (l != null){
        l.right = root.right;
        root.right = root.left;
        root.left = null;
    }
    if (r != null){
        return r;
    }
    if (l != null){
        return l;
    }
    return root;
};
