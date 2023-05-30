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
var countNodes = function(root) {
    var n1 = 0;
    var n2 = 0;
    var l = root;
    var r = root;
    while(l!=null){
        n1++;
        l=l.left;
    }
    while(r!=null){
        n2++;
        r=r.right;
    }
    if(n1==n2){
        return Math.pow(2,n1)-1;
    }
    return 1+countNodes(root.left)+countNodes(root.right);
};
