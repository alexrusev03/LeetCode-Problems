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
 * @param {number} k
 * @return {number}
 */
var kthSmallest = function(root, k) {
    var tree = []
    var convertInorder = function(root){
        if(root==null) return;
        convertInorder(root.left);
        tree.push(root.val);
        convertInorder(root.right);
    }
    convertInorder(root);
    return tree[k-1];
};
