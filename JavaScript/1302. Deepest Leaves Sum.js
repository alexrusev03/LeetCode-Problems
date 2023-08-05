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
var deepestLeavesSum = function(root) {
    var d=0;
    var height=0;
    var res = 0;
    var dfs = (root,height) => {
        if(root.left==null && root.right==null){
            if(height==d){
                res+=root.val;
            }
            else if(height>d){
                d=height;
                res=root.val;
            }
        }
        if(root.left!=null){
            dfs(root.left,height+1);
        }
        if(root.right!=null){
            dfs(root.right,height+1);
        }
    }
    dfs(root,height);
    return res;
};
