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
 * @param {number} key
 * @return {TreeNode}
 */
var deleteNode = function(root, key) {
    if (root==null){return null;}
    if(root.val<key){
        root.right=deleteNode(root.right,key);
    }
    else if(root.val>key){
        root.left=deleteNode(root.left,key);
    }
    else{
        if(root.left==null && root.right==null){
            return null;
        }
        else if(root.left==null || root.right==null){
            if(root.left!=null){return root.left;}
            return root.right;
        }
        else{
            temp=root.left;
            while(temp.right!=null){
                temp=temp.right;
            }
            root.val=temp.val;
            root.left=deleteNode(root.left, temp.val);
        }
    }
    return root;
};
