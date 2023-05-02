/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {ListNode} head
 * @return {TreeNode}
 */
var sortedListToBST = function(head) {
    var res = new Array();
    while(head!=null){
        res.push(head.val);
        head=head.next;
    }
    return sol(0,res.length-1,res);
};
var sol = function(l, r, res){
    if(l>r){
        return null;
    }
    var m = Math.floor((l+r)/2);
    var root= new TreeNode(res[m]);
    root.left=sol(l,m-1,res);
    root.right=sol(m+1,r,res);
    return root;
};
