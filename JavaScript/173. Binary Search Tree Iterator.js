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
 */
var list = []
var curr=-1;
var inorder = function(root) {
    if(root==null){return;}
    inorder(root.left);
    list.push(root.val);
    inorder(root.right);
}
var BSTIterator = function(root) {
    inorder(root);
};

/**
 * @return {number}
 */
BSTIterator.prototype.next = function() {
    if(curr == list.length - 1) {
        return -1;
    }
    curr++;
    return list[curr];
};

/**
 * @return {boolean}
 */
BSTIterator.prototype.hasNext = function() {
    if(curr == list.length - 1){
        return false;
    }
    return true;
};
/** 
 * Your BSTIterator object will be instantiated and called as such:
 * var obj = new BSTIterator(root)
 * var param_1 = obj.next()
 * var param_2 = obj.hasNext()
 */
