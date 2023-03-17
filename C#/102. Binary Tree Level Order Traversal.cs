/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public IList<IList<int>> LevelOrder(TreeNode root) {
        List<IList<int>> list = new List<IList<int>>();
        solution(0,list,root);
        return list;
    }
    public void solution(int lev, List<IList<int>> list, TreeNode root){
        if(root==null){return;}
        if(lev==list.Count){
            List<int> l1 = new List<int>();
            l1.Add(root.val);
            list.Add(l1);
        }
        else{
            list[lev].Add(root.val);
        }
        solution(lev+1,list,root.left);
        solution(lev+1,list,root.right);
    }
}
