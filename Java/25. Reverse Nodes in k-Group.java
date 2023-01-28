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
    public ListNode reverseKGroup(ListNode head, int k) {
        if(head==null || head.next==null || k == 1) {return head;}

        ListNode curr = head;
        ListNode sol = null;
        ListNode dum = null;

        while(curr!=null) {
            ListNode l = curr;
            ListNode r = null;
            int count = 0;
            while(curr!=null && count != k) {
                r = curr;
                curr = curr.next;
                count++;
            }

            if(count != k) {
                if(sol==null) {return head;}
                dum.next = l;
                return sol;
            }

            r.next = null;
            ListNode rev = reverse(l);

            if(sol==null) {sol = rev;}
            else {dum.next = rev;}
            dum = l;
        }
        return sol;
    }
    public ListNode reverse(ListNode curr) {
        ListNode next = curr, prev = null;
        while(curr!=null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
}
