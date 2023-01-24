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
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode ans = new ListNode();
        ListNode temp=ans;
        int carry = 0;
        while(l1!=null || l2!=null ||carry!=0){
            int num = 0;
            if(l1!=null){
                num=num+l1.val;
                l1=l1.next;
            }
            if(l2!=null){
                num=num+l2.val;
                l2=l2.next;
            }
            num=num+carry;
            carry = num/10;
            temp.next=new ListNode(num%10);
            temp=temp.next;
        }
        return ans.next;
    }
}
