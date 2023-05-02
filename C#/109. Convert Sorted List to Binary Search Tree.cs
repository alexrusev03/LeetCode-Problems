/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
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
    public TreeNode SortedListToBST(ListNode head) {
        List<int> res = new List<int>();
        while(head!=null){
            res.Add(head.val);
            head=head.next;
        }
        return sol(0,res.Count-1,res);
    }
    public TreeNode sol(int l, int r, List<int> res){
        if(l>r){
            return null;
        }
        int m = (l+r)/2;
        TreeNode root= new TreeNode(res[m]);
        root.left=sol(l,m-1,res);
        root.right=sol(m+1,r,res);
        return root;
    }
}
