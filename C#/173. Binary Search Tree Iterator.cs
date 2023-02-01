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
public class BSTIterator {
    List<int> list = new List<int>();
    int curr=-1;
    public void inorder(TreeNode root) {
        if(root==null){return;}
        inorder(root.left);
        list.Add(root.val);
        inorder(root.right);
    }

    public BSTIterator(TreeNode root) {
        inorder(root);
    }
    
    public int Next() {
        if(curr == list.Count - 1) {
            return -1;
        }
        curr++;
        return list[curr];
    }
    
    public bool HasNext() {
        if(curr == list.Count - 1){
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator obj = new BSTIterator(root);
 * int param_1 = obj.Next();
 * bool param_2 = obj.HasNext();
 */
