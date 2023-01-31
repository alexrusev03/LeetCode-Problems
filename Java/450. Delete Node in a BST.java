/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode deleteNode(TreeNode root, int key) {

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
                TreeNode temp=root.left;
                while(temp.right!=null){
                    temp=temp.right;
                }
                root.val=temp.val;
                root.left=deleteNode(root.left, temp.val);
            }
        }
        return root;
    }
}
