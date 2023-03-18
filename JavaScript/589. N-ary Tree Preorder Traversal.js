/**
 * // Definition for a Node.
 * function Node(val, children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */

/**
 * @param {Node|null} root
 * @return {number[]}
 */
var preorder = function(root) {
    var res = new Array();
    if(root==null){
        return res;
    }
    helper(root,res);
    return res; 
};
var helper = function(root,res){
    res.push(root.val);
    for(var i of root.children){
        helper(i,res);
    }
};
