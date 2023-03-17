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
    public ListNode MergeTwoLists(ListNode list1, ListNode list2) {
        if (list1==null){
            return list2;
        }
        if (list2==null){
            return list1;
        }
        if (list1==null && list2==null){
            return null;
        }
        ListNode head;
        if (list1.val < list2.val){
            head = list1;
            list1=list1.next;
        }
        else{
            head=list2;
            list2=list2.next;
        }
        ListNode ret=head;
        while(list1!=null && list2!=null){
            if (list1.val < list2.val){
                head.next=list1;
                list1=list1.next;
            }
            else{
                head.next=list2;
                list2=list2.next;
            }
            head=head.next;
        }
        if (list1!=null){
            head.next=list1;
        }
        else if (list2!=null){
            head.next=list2;
        }
        return ret;
    }
}
