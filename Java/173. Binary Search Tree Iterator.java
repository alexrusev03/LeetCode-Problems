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
class BSTIterator {
    List<Integer> list = new ArrayList<>();
    int curr=-1;
    public void inorder(TreeNode root) {
        if(root==null){return;}
        inorder(root.left);
        list.add(root.val);
        inorder(root.right);
    }

    public BSTIterator(TreeNode root) {
        inorder(root);
    }
    
    public int next() {
        if(curr == list.size() - 1) {
            return -1;
        }
        curr++;
        return list.get(curr);
    }
    
    public boolean hasNext() {
        if(curr == list.size() - 1){
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator obj = new BSTIterator(root);
 * int param_1 = obj.next();
 * boolean param_2 = obj.hasNext();
 */
