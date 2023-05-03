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
 * @return {void} Do not return anything, modify root in-place instead.
 */
var recoverTree = function(root) {
    f=null;
    s=null;
    pre=null;
    var helper = function(root){
        if(root==null){
            return;
        }
        helper(root.left);
        if(pre!=null && pre.val>root.val){
            if(f==null){
                f=pre;
            }
            s=root;
        }
        pre=root;
        helper(root.right);
    }
    helper(root);
    var temp = f.val;
    f.val=s.val;
    s.val=temp;
};
