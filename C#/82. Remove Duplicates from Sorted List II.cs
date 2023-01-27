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
    public ListNode DeleteDuplicates(ListNode head) {
        ListNode curr=null;
        ListNode sol=null;
        while(head!=null){
            if(head.next!=null && head.next.val == head.val){
                ListNode temp = head;
                while(head.next!=null && head.next.val == head.val){
                    head = head.next;
                    temp=null;
                }
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
