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
 * @return {string[]}
 */
var binaryTreePaths = function(root) {
    var res = new Array();
    var s = "";
    helper(root,s,res);
    return res;
}
var helper = function(root,s,res){
    if(root.left==null && root.right==null){
        s=s+root.val;
        res.push(s);
    }
    s=s+root.val+"->";
    if(root.left!=null){
        helper(root.left,s,res);
    }
    if(root.right!=null){
        helper(root.right,s,res);
    }
};
