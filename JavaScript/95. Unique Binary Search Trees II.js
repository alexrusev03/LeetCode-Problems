/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {number} n
 * @return {TreeNode[]}
 */
var generateTrees = function(n) {
    var ans = helper(1, n);
    return ans;
}
var helper = function(start, end) {
    var ans = new Array();
    if(start>end) {
        ans.push(null);
        return ans;
    }
    for(var i=start; i<=end; i++) {
        var left = helper(start, i-1);
        var right = helper(i+1, end);
        for(var l of left){
            for(var r of right){
                ans.push(new TreeNode(i, l, r));
            }
        }
    }
    return ans;
};
