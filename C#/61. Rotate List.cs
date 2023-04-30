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
    public ListNode RotateRight(ListNode head, int k) {
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
