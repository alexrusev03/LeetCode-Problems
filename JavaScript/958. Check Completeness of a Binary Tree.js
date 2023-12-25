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
var isCompleteTree = function(root) {
    var q = new Array();
    var n;
    var f = false;
    q.push(root);
    while(q.length>0){
        n = q.shift();
        if(n == null){
            f = true;
        }
        else{
            if(f == true){
                return false;
            }
            q.push(n.left);
            q.push(n.right);
        }
    }
    return true;
};
