/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
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
    public TreeNode sortedListToBST(ListNode head) {
        List<Integer> res = new ArrayList<>();
        while(head!=null){
            res.add(head.val);
            head=head.next;
        }
        return sol(0,res.size()-1,res);
    }
    public TreeNode sol(int l, int r, List<Integer> res){
        if(l>r){
            return null;
        }
        int m = (l+r)/2;
        TreeNode root= new TreeNode(res.get(m));
        root.left=sol(l,m-1,res);
        root.right=sol(m+1,r,res);
        return root;
    }
}
