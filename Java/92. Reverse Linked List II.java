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
class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {
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
