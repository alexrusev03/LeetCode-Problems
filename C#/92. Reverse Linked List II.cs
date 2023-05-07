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
public class Solution {
    public ListNode ReverseBetween(ListNode head, int left, int right) {
        ListNode pre = new ListNode();
        ListNode curr = new ListNode();
        while(right-left>0){
            pre=head;
            int i = 0;
            while(i++<left-1){
                pre=pre.next;
            }
            curr = pre;
            while(i < right){
                curr = curr.next;
                i++;
            }
            int temp = pre.val;
            pre.val = curr.val;
            curr.val = temp;
            left++;
            right--;
        }
        return head;
    }
}
