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
    public ListNode SortList(ListNode head) {
        ListNode temp=head;
        if(head==null){
            return null;
        }
        List<int> list = new List<int>();
        while(temp!=null){
            list.Add(temp.val);
            temp=temp.next;
        }
        list.Sort();
        ListNode res= new ListNode(list[0]);
        ListNode t=res;
        for(int i=1;i<list.Count;i++){
            ListNode curr= new ListNode(list[i]); 
            t.next=curr;
            t=curr;
        }
        t.next=null;
        return res;
    }
}
