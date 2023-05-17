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
    public IList<IList<int>> LevelOrderBottom(TreeNode root) {
        List<IList<int>> res = new List<IList<int>>();
        if(root==null){
            return res;
        }
        Queue<TreeNode> q = new Queue<TreeNode>();
        Stack<List<int>> stk =new Stack<List<int>>();
        q.Enqueue(root);
        while(q.Count!=0){
            int n = q.Count;
            List<int> l = new List<int>();
            for(int i=0;i<n;i++){   
                TreeNode temp = q.Dequeue();
                l.Add(temp.val);
                if(temp.left!=null){
                    q.Enqueue(temp.left);
                }
                if(temp.right!=null){
                    q.Enqueue(temp.right);
                }
            }
            stk.Push(l);
        }
        while(stk.Count!=0){
            res.Add(stk.Pop());
        }
        return res;
    }
}
