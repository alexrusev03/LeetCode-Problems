/**
 * // Definition for a Node.
 * function Node(val,children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */

/**
 * @param {Node|null} root
 * @return {number[]}
 */
var postorder = function(root) {
    var res = new Array();
    var order = function(root){
        if(root==null){
            return res;
        }
        for(var n of root.children){
            order(n);
        }
        res.push(root.val);
        return res;
    }
    order(root);
    return res;
};
