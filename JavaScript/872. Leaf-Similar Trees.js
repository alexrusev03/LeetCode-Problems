/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {boolean}
 */
var leafSimilar = function(root1, root2) {
    var list1 = new Array();
    var list2 = new Array();
    helper(root1, list1);
    helper(root2, list2);
    return list1.join('_') == list2.join('_');
};
var helper = function(root, list){
    if(root == null){
        return;
    }
    if (root.left == null && root.right == null){
        list.push(root.val);
        return;
    }
    helper(root.left, list);
    helper(root.right, list);
};
