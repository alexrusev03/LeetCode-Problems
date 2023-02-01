/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestor = function(root, p, q) {
    if(root == null) {return null;}
        
    if(root.val == p.val|| root.val == q.val){
       return root;
    }
       
    var l = lowestCommonAncestor(root.left,p,q);
    var r = lowestCommonAncestor(root.right,p,q);
       
    if(l != null && r != null ) {return root;}
    else if(l != null && r ==null) {return l;}
    else if(l == null && r !=null) {return r;}
    else {return null;}
};
