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
var levelOrderBottom = function(root) {
    var res = [];
    if(root==null){
        return res;
    }
    var q = [];
    var stk = [];
    q.push(root);
    while(q.length!=0){
        var n = q.length;
        var l = new Array();
        for(var i=0;i<n;i++){   
            var temp = q.shift();
            l.push(temp.val);
            if(temp.left!=null){
                q.push(temp.left);
            }
            if(temp.right!=null){
                q.push(temp.right);
            }
        }
        stk.push(l);
    }
    while(stk.length!=0){
        res.push(stk.pop());
    }
    return res;
};
