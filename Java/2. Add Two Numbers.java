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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
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
