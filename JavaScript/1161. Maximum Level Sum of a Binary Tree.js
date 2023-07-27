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
var maxLevelSum = function(root) {
    if(root==null){
        return 0;
    }
    var q = [root];
    var res=1;
    var max=-Infinity;
    var lev=0;
    while(q.length!=0){
        var n=q.length;
        var sum=0;
        lev++;
        for(var i=0;i<n;i++){
            var t=q.shift();
            sum+=t.val;
            if(t.left!=null){
                q.push(t.left);
            }
            if(t.right!=null){
                q.push(t.right);
            }
        }
        if(sum>max){
            max=sum;
            res=lev;
        }
    }
    return res;
};
