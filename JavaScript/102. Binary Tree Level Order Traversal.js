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
 * @return {number[][]}
 */
var levelOrder = function(root) {
    var list = new Array();
    solution(0,list,root);
    return list;
};
var solution = function(lev, list, root){
    if(root==null){return;}
    if(lev==list.length){
        var l1 = new Array();
        l1.push(root.val);
        list.push(l1);
    }
    else{
        list[lev].push(root.val);
    }
    solution(lev+1,list,root.left);
    solution(lev+1,list,root.right);
};
