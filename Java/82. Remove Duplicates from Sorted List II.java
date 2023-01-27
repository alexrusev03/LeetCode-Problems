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
    public ListNode deleteDuplicates(ListNode head) {
        ListNode curr=null;
        ListNode sol=null;
        while(head!=null){
            if(head.next!=null && head.next.val == head.val){
                while(head.next!=null && head.next.val == head.val){
                    ListNode temp = head;
                    head = head.next;
                    temp=null;
                }
                ListNode temp = head;
                head = head.next;
                temp=null;
            }
            else{
                if(sol==null){
                    sol=head;
                    curr=head;
                }
                else{
                    curr.next=head;
                    curr=curr.next;
                }
                head=head.next;
            }
        }
        if(curr!=null){curr.next=null;}
        return sol;
    }
}
