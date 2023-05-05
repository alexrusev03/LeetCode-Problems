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
    public ListNode partition(ListNode head, int x) {
        ListNode ln1=new ListNode();
        ListNode ln2=new ListNode(0);
        ListNode less=ln1;
        ListNode great=ln2;
        ListNode curr=head;
        while(curr!=null) {
            if(curr.val<x) {
                less.next=curr;
                less=less.next;
            }
            else{
                great.next=curr;
                great=great.next;
            }
            curr=curr.next;
        }
        great.next=null;
        less.next=ln2.next;
        return ln1.next;
    }
}
