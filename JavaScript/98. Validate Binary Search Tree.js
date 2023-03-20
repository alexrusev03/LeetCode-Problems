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
var isValidBST = function(root) {
    return solution(root,Number.MIN_SAFE_INTEGER,Number.MAX_SAFE_INTEGER);
};
var solution = function(root, lowval, highval){
    if(root==null){return true;}
    if(root.val>lowval && root.val<highval){
        return solution(root.left, lowval, root.val) && solution(root.right,root.val,highval);
    }
    return false;
}
