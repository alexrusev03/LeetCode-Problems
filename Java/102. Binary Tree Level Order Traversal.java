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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> list = new ArrayList<List<Integer>>();
        solution(0,list,root);
        return list;
    }
    public void solution(int lev, List<List<Integer>> list, TreeNode root){
        if(root==null){return;}
        if(lev==list.size()){
            List<Integer> l1 = new ArrayList<Integer>();
            l1.add(root.val);
            list.add(l1);
        }
        else{
            list.get(lev).add(root.val);
        }
        solution(lev+1,list,root.left);
        solution(lev+1,list,root.right);
    }
}
