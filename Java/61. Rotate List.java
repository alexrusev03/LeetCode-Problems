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
    public ListNode rotateRight(ListNode head, int k) {
        if(k==0 || head==null){
            return head;
        }
        ListNode t=head;
        ListNode l=head;
        int count = 0;
        ListNode temp = head;
        while(temp!=null){
            count++;
            temp = temp.next;
        }
        for(int i = k%count-1; i >= 0; i--){
            while(t.next!=null){
                l=t;
                t=t.next;
            }
            l.next=null;
            t.next=head;
            head=t;
        }  
        return head;
    }
}
