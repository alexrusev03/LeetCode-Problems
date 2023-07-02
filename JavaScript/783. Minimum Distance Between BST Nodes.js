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
var minDiffInBST = function(root) {
    var diff = Number.MAX_VALUE;
    var temp = -1;
    var helper = function(root){
        if(root!=null){
            helper(root.left);
            if(temp==-1){
                temp=root.val;
            }
            else{
                diff=Math.min(root.val-temp,diff);
                temp=root.val;
            }
        helper(root.right);
        }
    }
    helper(root);
    return diff;
};
