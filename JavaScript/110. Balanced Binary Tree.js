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
 * @return {boolean}
 */
var isBalanced = function(root) {
    if(helper(root)!=-1){
        return true;
    }
    return false;
}
var helper = function(root){
    if(root==null){
        return 0;
    }
    var l=helper(root.left);
    if(l==-1){
        return -1;
    }
    var r=helper(root.right);
    if(r==-1){
        return -1;
    }
    if(Math.abs(l-r)>1){
        return -1;
    }
    return 1+Math.max(l,r);
};
