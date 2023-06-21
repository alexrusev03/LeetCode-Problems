/**
 * // Definition for a Node.
 * function Node(val,children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */

/**
 * @param {Node|null} root
 * @return {number}
 */
var maxDepth = function(root) {
    if(root==null){
        return 0;
    }
    var res = 0;
    for(var i of root.children){
        res = Math.max(res, maxDepth(i));
    }
    return res+1;
};
